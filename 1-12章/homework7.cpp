#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

//class Data {
//public:
//
//private:
//	static const int period = 36;
//	//double daily_tbl[period];
//
//	
//};
//int main() {
//	constexpr Data test();
//	cout << test << endl;
//}

//test 7.4
//class Person {
//private:
//	string name;
//	string address;
//};

//test 7.5
//class Person {
//public:
//	string check_address() const {
//		return this->address;
//	}
//	string check_name() const {
//		return this->name;
//	}
//private:
//	string name;
//	string address;
//};

//test7.9
//class Person {
//public:
//	istream& read(istream& is, Person&  ps);
//	ostream& write(ostream& os, const Person& ps);
//	string check_address() const {
//		return address;
//	}
//	string check_name() const {
//		return name;
//	}
//
//private:
//	string name;
//	string address;
//};
//istream& Person::read(istream& is, Person&  ps ) {
//	is >> ps.address >> ps.address;//这里是向Person中写入内容，改变了它的值，所以ps不能为const
//	return is;
//}
//
//ostream& Person::write(ostream& os, const Person& ps) {
//	os << "name:" << ps.name << endl;
//	os << "address" << ps.address << endl;
//	return os;
//	
//}
//

//test 7.14,7.15
//class Person {
//public:
//	Person(string &a, string &b) :name(a), address(b) {};
//	Person() = default;
//	istream& read(istream& is, Person&  ps);
//	ostream& write(ostream& os, const Person& ps);
//	string check_address() const {
//		return address;
//	}
//	string check_name() const {
//		return name;
//	}
//
//private:
//	string name;
//	string address;
//};
//istream& Person::read(istream& is, Person&  ps ) {
//	is >> ps.address >> ps.address;//这里是向Person中写入内容，改变了它的值，所以ps不能为const
//	return is;
//}
//
//ostream& Person::write(ostream& os, const Person& ps) {
//	os << "name:" << ps.name << endl;
//	os << "address" << ps.address << endl;
//	return os;
//	
//}


//test7.22
//class Person {
//public:
//	Person(string& a, string& b) :name(a), address(b) {};
//	Person() = default;
//	istream& read(istream& is, Person& ps);
//	ostream& write(ostream& os, const Person& ps);
//	string const check_address() const;
//	string const check_name() const;
//private:
//	string name;
//	string address;
//};
//istream& Person::read(istream& is, Person& ps) {
//	is >> ps.name >> ps.address;//这里是向Person中写入内容，改变了它的值，所以ps不能为const
//	return is;
//}
//
//ostream& Person::write(ostream& os, const Person& ps) {
//	os << "name:" << ps.name << endl;
//	os << "address" << ps.address << endl;
//	return os;
//
//}
//string const Person:: check_address() const {
//	return address;
//}
//string const Person:: check_name() const {
//	return name;
//}
//
//int main() {
//	string a = "a";
//	string b = "b";
//	Person ps1(a, b);
//	Person ps2;
//	ps2.read(cin, ps2);
//	ps2.write(cout, ps2) << endl;
//}