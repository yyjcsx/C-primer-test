#pragma once
#ifndef SP_H
#define SP_H
template<typename T>
class SP
{
public:
	SP() :p(nullptr), use(nullptr) {};
	explicit SP(T* new_p) :p(new_p), use(new size_t(1)) {};//���캯����explicit������ʽ����ת�����״ι����ʹ�ô���ʹ��new��ʼ��Ϊ1
	SP(const SP& sp) :p(sp.p), use(sp.use) {
		if (use)
			++* use;//�������캯������Ϊuse��sp.use����ָ�룬����ǳ����������ָ����ͬ�Ķ���++*use��this��sp��ʹ�ô����������ˣ�������д������
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
