#include "SP.h"
template<typename T>
SP<T>::~SP() {
	if (use && -- * use == 0) {
		delete p;
		delete use;
	}
}


template<typename T>
SP<T>& SP<T>::operator=(const SP<T> &rhs)
{
	if (rhs.use)
		++rhs.use;
	if (use && -- * use == 0)
	{
		delete p;
		delete use;
	}
	p = rhs.p;
	use = rhs.use;
	return *this;
}

//template<typename T,class...Args>
//SP<T> make_SP(Args&&... args) {
//	return SP<T>(new T(std::forward<Args>(ags)...));
//}
