#pragma once
#include<string>
#include<iostream>
using std::string;
using std::ostream;
using std::istream;
class Tree;
ostream& operator <<(ostream& os, Tree& tree);
//ostream& print(ostream& os, Tree &tree);
//istream& operator >>(istream& is, Tree &tree);
//bool operator==(Tree& tree1, Tree& tree2);
//bool operator!=(Tree& tree1, Tree& tree2);
class Tree {
	friend bool operator!=(Tree& tree1, Tree& tree2);
	friend bool operator==(Tree& tree1, Tree& tree2);
	friend ostream& print(ostream& os, Tree &tree);
	friend istream& operator>>(istream& is, Tree &tree);
	
private:
	int age;
	string Type_name;
	bool healthy_or_not;
	int height;
public:
	Tree(int a, string b, bool h, int d) :age(a), Type_name(b), healthy_or_not(h), height(d) {};
	Tree() :Tree(0, "", 0, 0) {}
	Tree(string b) :Tree(0, b, 0, 0) {}
	Tree& operator = (Tree tree2);

	//test 14.49
	operator bool() const;
	//Tree& operator = (Tree&& tree2) noexcept;
};

