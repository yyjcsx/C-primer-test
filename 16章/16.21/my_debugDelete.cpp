#include<memory>
#include<iostream>
using namespace std;
class DebugDelete {
public:
	DebugDelete(ostream& s = cerr) :os(s) {}
	template<typename T> void operator()(T* p) const {
		os << "deleting unique_ptr" << endl; delete p;
	}
private:
	ostream& os;
};
//ע��12.27��runQuery()��һ����ѭ����Ҫ���CTRL+Z��ʾ�����������ʱ���������½��У�shared_ptr�����٣�ִ��DebugDelete();