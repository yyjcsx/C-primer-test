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
//注意12.27的runQuery()是一个死循环，要输出CTRL+Z表示输入结束，这时候程序才往下进行，shared_ptr被销毁，执行DebugDelete();