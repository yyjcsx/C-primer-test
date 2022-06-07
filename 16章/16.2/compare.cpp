#include<algorithm>
#include<functional>
#include<iostream>
#include<string>
template<typename T>
//int compare(const T& v1, const T& v2) {
//	if (std::less<T>(v1, v2)) {
//		std::cout << "v1 < v2 "<< std::endl;
//		return 1;
//	}
//	if (std::less<T>(v2, v1)) {
//		std::cout << "v2 < v1" << std::endl;
//		return -1;
//	}
//	return 0;
//}
int compare(const T& v1, const T& v2) {
	if (v1 < v2)return -1;
	if (v2 < v1)return 1;
	return 0;
}


int main() {
	//compare(3, 2);
	bool m = compare<char[6]>("hello", "world");
	//bool m = compare<std::string>("hello", "world");
	std::cout << m << std::endl;
}