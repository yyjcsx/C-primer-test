#include"Tree.h"
//using std::string;
//using std::ostream;


ostream& print(ostream& os, Tree &tree) {
	os << "The age is " << tree.age << " The tree's type is " << tree.Type_name << " The tree's height is " << tree.height;
	return os;
}
ostream& operator <<(ostream& os, Tree &tree) {
	return print(os, tree);
}
istream& operator>>(istream& is, Tree &tree) {
	is >> tree.healthy_or_not>> tree.age  >> tree.height >> tree.Type_name;
	if (is)
		std::cout << "input successful" << std::endl;
	else
		tree = Tree();
	return is;
		
}

bool operator==(Tree& tree1, Tree& tree2) {
	return tree1.age == tree2.age && tree1.healthy_or_not == tree2.healthy_or_not && tree1.height == tree2.height && tree1.Type_name == tree2.Type_name;
}
bool operator!=(Tree& tree1, Tree& tree2) {
	return !(tree1 == tree2);
}
Tree& Tree::operator=(Tree tree2) {
	if (tree2 != *this)
	{
		age = tree2.age;
		healthy_or_not = tree2.healthy_or_not;
		height = tree2.height;
		Type_name = tree2.Type_name;
	}
	return *this;
}
//test 14.49
Tree::operator bool() const {
	return height;
}
//Tree& Tree::operator=(Tree&& tree2) noexcept {
//	if (tree2 != *this) {
//		age = tree2.age;
//		healthy_or_not = tree2.healthy_or_not;
//		height = tree2.height;
//		Type_name = tree2.Type_name;
//		tree2.age = 0;
//		tree2.healthy_or_not = 0;
//		tree2.height = 0;
//		tree2.Type_name = "";
//	}
//	return *this;
//}