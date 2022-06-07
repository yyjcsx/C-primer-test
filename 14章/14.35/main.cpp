#include"PrintString.h"
using std::cout;
int main() {
	PrintString pt(cin);
	vector<string> v1;
	pt(v1);
	for (auto c = v1.begin(); c != v1.end(); ++c)
		cout << *c << std::endl;
}