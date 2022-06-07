#include "UP.h"
template<typename T>
UP<T>::~UP() {
	if(p)
	delete p;
}
template<typename T>
void UP<T>::reset(T* new_p ) {
	if (p)
		delete p;
	p = new_p;
}

template<typename T>
T* UP<T>::release() {
	T* q = p;
	p = nullptr;
	return q;
}