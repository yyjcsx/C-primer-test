#include"SP.h"
#include<utility>
#include<vector>
#include<string>

template<typename T>
SP<T>::~SP() {
	if (use && -- * use == 0) {
		delete p;
		delete use;
	}
}


template<typename T>
SP<T>& SP<T>::operator=(const SP<T>& rhs)
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
template<typename T,typename...Args>auto make_SP(Args&&...arg) -> SP<T>
{
	return SP<T>(new T(std::forward<Args>(arg)...));
}
int main() {
	std::string vs("The okatus save ");
	auto s1 = make_SP<std::string>(vs);

}