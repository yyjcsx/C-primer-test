#pragma once
#include"Query_base.h"
#include<algorithm>
#include<iterator>
class Query
{
	friend Query operator~(const Query&);
	friend Query operator|(const Query&, const Query&);
	friend Query operator&(const Query&, const Query&);
public:
	Query(const string&);
	Queryresult eval(const textQuery& t)const {
		return q->eval(t);
	}
	string rep()const { return q->rep(); }
	
private:
	Query(shared_ptr<Query_base>query):q(query){}
		shared_ptr<Query_base> q;
};
ostream& operator<<(ostream& os, const Query& query) {
	return os << query.rep();//输出Query就是输出这个Query的rep()，即运算结果
}

class WordQuery :
	public Query_base
{
	friend class Query;
	string query_word;
	WordQuery(const string& s) :query_word(s) {};

	Queryresult eval(const textQuery& t) const override { return t.query(query_word); }
	string rep()const { return query_word; }

};

inline
Query::Query(const std::string& s) : q(new WordQuery(s)) {}

class NotQuery :
	public Query_base
{
	friend Query operator~(const Query&);
	NotQuery(const Query& q) :query(q) {}
	Query query;
	Queryresult eval(const textQuery&) const;
	string rep() const { return "~(" + query.rep() + ")"; }
	
};
inline Query operator~(const Query& operand) {
	return shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery :public Query_base {//这也是一个抽象基类，是And和Or两种运算的基础
protected:
	BinaryQuery(const Query& l, const Query& r, string s) :lhs(l), rhs(r), opSym(s) {}
	string rep() const { return "(" + lhs.rep() + "" + opSym + " " + rhs.rep() + " "; }
	Query lhs, rhs;
	string opSym;
};

class AndQuery :public BinaryQuery {
	friend Query operator &(const Query&, const Query&);
	AndQuery(const Query& left, const Query& right) :BinaryQuery(left, right, "&") {}
	Queryresult eval(const textQuery&) const;
};
inline Query operator&(const Query& lhs, const Query& rhs) {
	return shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}
class OrQuery :public BinaryQuery {
	friend Query operator|(const Query&, const Query&);
	OrQuery(const Query& left, const Query& right) :BinaryQuery(left, right, "|") {}
	Queryresult eval(const textQuery&)const;
};
inline Query operator|(const Query& lhs, const Query& rhs) {
	return shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}
Queryresult OrQuery::eval(const textQuery& text) const {
	auto right = rhs.eval(text), left = lhs.eval(text);
	shared_ptr<set<line_no>> ret_lines = std::make_shared<set<line_no>>(left.begin(), left.end());
	ret_lines->insert(right.begin(), right.end());
	return Queryresult(rep(), ret_lines, left.get_file());
}
Queryresult
AndQuery::eval(const textQuery& text) const {
	// virtual calls through the Query operands to get result sets for the operands
	Queryresult left = lhs.eval(text), right = rhs.eval(text);

	// set to hold the intersection of left and right
	shared_ptr<set<line_no> > ret_lines(new set<line_no>);

	// writes the intersection of two ranges to a destination iterator
	// destination iterator in this call adds elements to ret
	set_intersection(left.begin(), left.end(),
		right.begin(), right.end(),
		inserter(*ret_lines, ret_lines->begin()));
	return Queryresult(rep(), ret_lines, left.get_file());
}


Queryresult
NotQuery::eval(const textQuery& text) const {
	// virtual call to eval through the Query operand
	Queryresult result = query.eval(text);

	// start out with an empty result set
	shared_ptr<set<line_no> > ret_lines(new set<line_no>);

	// we have to iterate through the lines on which our operand appears
	Queryresult::line_it beg = result.begin(), end = result.end();

	// for each line in the input file, if that line is not in result,
	// add that line number to ret_lines
	vector<string>::size_type sz = result.get_file()->size();
	for (size_t n = 0; n != sz; ++n) {
		// if we haven't processed all the lines in result
		// check whether this line is present
		if (beg == end || *beg != n)
			ret_lines->insert(n);  // if not in result, add this line
		else if (beg != end)
			++beg; // otherwise get the next line number in result if there is one
	}
	return Queryresult(rep(), ret_lines, result.get_file());
}
