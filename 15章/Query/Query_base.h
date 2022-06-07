#pragma once
#include"textQuery.h"
class Query;
class Queryresult;
class Query_base
{
	friend class Query;
protected:
	using line_no = textQuery::line_no;
	virtual ~Query_base() = default;
private:
	virtual Queryresult eval(const textQuery&) const = 0;
	virtual string rep() const = 0;
};

