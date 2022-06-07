#include "String.h"

#include <vector>
using std::vector;

using std::cout;
using std::endl;
#include <algorithm>
using std::for_each;

int main() {
    String s1("OneOneOne"), s2("TwoTwoTwo");
    //cout << s1 << " " << s2 << endl << endl;
    //String s3(s2);
    //cout << s1 << " " << s2 << " " << s3 << endl << endl;
    //s3 = s1;
    //cout << s1 << " " << s2 << " " << s3 << endl << endl;
    //s3 = String("Three");
    //cout << s1 << " " << s2 << " " << s3 << endl << endl;

    //vector<String> svec;
    // svec.reserve(4);
    //svec.push_back(s1);
    //svec.push_back(std::move(s2));
    //svec.push_back(String("Three"));
    //svec.push_back("Four");
    //for_each(svec.begin(), svec.end(), [](const String& s) { cout << s << " "; });
    //cout << endl;
    if (s1 < s2)
        cout << "s1<s2" << endl;
    else
        cout << "s1>=s2" << endl;

    cout << s1[2] << endl;
    cout << s2[2] << endl;

    return 0;
}
