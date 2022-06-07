#pragma once
#ifndef SP_H
#define SP_H
template<typename T>
class SP
{
public:
	SP() :p(nullptr), use(nullptr) {};
	explicit SP(T* new_p) :p(new_p), use(new size_t(1)) {};//构造函数，explicit避免隐式类型转换，首次构造故使用次数使用new初始化为1
	SP(const SP& sp) :p(sp.p), use(sp.use) {
		if (use)
			++* use;//拷贝构造函数，因为use和sp.use都是指针，所以浅拷贝本质上指向相同的对象，++*use后this和sp的使用次数都增加了，不用再写两次了
	}
	SP& operator=(const SP&);
	~SP();
	T* operator*();
	T* operator*() const;
private:
	T* p;
	size_t* use;


};
#endif
