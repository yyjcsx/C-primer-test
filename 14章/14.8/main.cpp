#include<string>
#include<iostream>
#include"Tree.h"
using namespace std;

int main() {
	Tree tree(25, "apple tree", 1, 0);
	//Tree tree;
	/*cin >> tree;
	cout << tree;*/

	//test 14.49
	if (tree)
		cout << "this tree is true" << endl;
	else
		cout << "this tree is not true" << endl;
}