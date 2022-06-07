#pragma once
#ifndef UP_H
#define UP_H

template<typename T>
class UP
{
public:
	UP() :p(nullptr) {}
	UP(const UP&) = delete;
	explicit UP(T *pt) :p(pt){}
	UP& operator=(const UP&) = delete;
	~UP();
	T* release();
	void reset(T* new_p = nullptr);
	T& operator* () { return *p; }
	T* operator*()const { return *p; }
private:
	T* p;
};




#endif // !UP_H


