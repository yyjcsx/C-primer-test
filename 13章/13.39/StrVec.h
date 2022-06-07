#pragma once
#ifndef STRVEC_H
#define STRVEC_H

#include <string>
using std::string;
#include <memory>
using std::allocator;
#include <utility>
using std::pair;
#include <initializer_list>
using std::initializer_list;

class StrVec;
bool operator ==(const StrVec& s1, const StrVec& s2);
bool operator !=(const StrVec& s1, const StrVec& s2);
class StrVec {
	friend bool operator ==(const StrVec& s1, const StrVec& s2);
	friend bool operator !=(const StrVec& s1, const StrVec& s2);
public:
	StrVec():elements(nullptr),first_free(nullptr),cap(nullptr){}
	StrVec(const StrVec&);
	StrVec(initializer_list<string>);
	StrVec& operator=(const StrVec&);
	StrVec& operator=(initializer_list<string> li);
	~StrVec();
	void push_back(const std::string&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	std::string* begin() const { return elements; }
	std::string* end() const { return first_free; }
	void reserve(size_t size);
	void resize(size_t size, const std:: string&);
	
private:
	static std::allocator<std::string> alloc;
	void chk_n_alloc()
	{
		if (size() == capacity()) reallocate();
	}
	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
	std::string* elements;
	std::string* first_free;
	std::string* cap;
	void free();
	void reallocate();
	void reallocate(size_t n);
};


#endif // !STRVEC_H
