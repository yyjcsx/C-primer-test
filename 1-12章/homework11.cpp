#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
#include<numeric>
#include<functional>
#include<fstream>
#include<map>
#include<sstream>
#include <unordered_map>
using namespace std;
using namespace std::placeholders;

//test 11.3
//int main() {
//	map<string, int> word_number;
//	string s1;
//	while (cin >> s1) {
//		word_number[s1]++;
//	}
//	for (const auto& c : word_number) {
//		cout << "the word is   " << c.first << "   the number is" << c.second << endl;//ע��first second��ģ������ݳ�Ա����˺��治�ܴ����š������ž��ǳ�Ա������
//	}
//}

//test 11.4
//string transform(string& s1) {
//	int p = 0;
//	for (auto c = s1.begin(); c != s1.end(); ++c,++p) {//����++c�ĵط��Ͳ�Ҫ��c++
//		if (*c >= 'A' && *c <= 'Z') {
//			*c += 32;//�ǼӲ��Ǽ�
//		}
//		else if (*c == '.' || *c == ',')
//			  s1.erase(c);
//		if (c == s1.end()) {//ע��forѭ���Ĵ���˳��c!=s1.end()����ÿ��ѭ�����жϵģ����eraseĩβԪ����++c�൱��ָ����s1.end()�������һ��Ԫ�أ��ڴ�й©
//			break;
//		}
//	}
//	return s1;
//}
//
//int main() {
//	map<string, int> word_number;
//	string s1;
//	while (cin >> s1) {
//		
//		
//		++word_number[transform(s1)];
//	}
//	for (const auto& c : word_number) {
//		cout << "the word is   " << c.first << "   the number is" << c.second << endl;//ע��first second��ģ������ݳ�Ա����˺��治�ܴ����š������ž��ǳ�Ա������
//	}
//}

//test 11.7
//void insert_map(map<string,vector<string>> &family) {
//	string f_name;
//	string peple_name;
//	while (cin >> f_name, cin >> peple_name) {
//		family[f_name].push_back(peple_name);
//	}
//	
//}
//int main() {
//	map<string, vector<string>> family;
//	insert_map(family);
//	for (auto& a : family)
//	{
//		cout << "family name is" << a.first << endl;
//		for (auto& b : a.second) {
//			cout << "member name is" << b << "   ";
//	}
//		cout << endl;
//	}
//}






//test 11.8
//int main() {
//	vector<string> v1;
//	string s1;
//	
//	while (cin >> s1) {
//		int flag = 1;
//		for (auto& a : v1) {
//			if (s1 == a)
//				flag *= 0;
//			else {
//				flag *= 1;
//			}
//		}
//		if (flag == 1) {
//			v1.push_back(s1);
//		}
//	}
//	for (auto& a : v1)
//		cout << a << "   ";
//}

//test 11.9
//int main() {
//	ifstream in ("11.9.txt");
//	map<string, list<int>> word_line;
//	string s1;
//	string s2;
//	cin >> s2;
//	int line_number = 1;
//	while (getline(in, s1)) {
//		if (s1.find(s2)!=-1)//string�в���stringʹ��find��Ա�����ɣ���Ҫ����forѰ��char��
//		{
//			word_line[s2].push_back(line_number);	
//		}
//		string s1 = "";
//		++line_number;
//	}
//	for (auto& d : word_line[s2])
//		cout << d << "  ";
//}

//test 11.14

//void insert_map(map<string,vector<string>> &family,vector<pair<string,string>> &birthday) {
//	string f_name;
//	string peple_name;
//	string day_of_birth;
//	while (cin >> f_name, cin >> peple_name,cin>>day_of_birth) {
//		family[f_name].push_back(peple_name);
//		birthday.push_back({ peple_name,day_of_birth });
//	}
//	
//}
//int main() {
//	map<string, vector<string>> family;
//	vector<pair<string, string>> birthday;
//	insert_map(family,birthday);
//	for (auto& a : family)
//	{
//		cout << "family name is" << a.first << endl;
//		for (auto& b : a.second) {
//			cout << "member name is" << b << "   ";
//	}
//		cout << endl;
//	for (auto& b : birthday)
//	{
//		cout << "child's name is" << b.first << endl;
//		
//			cout << "birthday is" << b.second << "   ";
//	}
//		cout << endl;
//	}
//}



//test 11.20
//int main() {
//	map<string, int> word_number;
//	string s1;
//	while (cin >> s1) {
//		word_number[s1]++;
//		auto p1 = word_number.insert(make_pair( s1,1 ));
//		if (!p1.second)
//			++p1.first->second;//p1.first��һ����������ָ��map��Ӧλ�õ�pair�����pair��first��s1,second�Ǽ���
//		
//	}
//	for (const auto& c : word_number) {
//		cout << "the word is   " << c.first << "   the number is" << c.second << endl;//ע��first second��ģ������ݳ�Ա����˺��治�ܴ����š������ž��ǳ�Ա������
//	}
//}


//test 11.23
//void insert_map(multimap<string,string> &family) {
//	string f_name;
//	string peple_name;
//	while (cin >> f_name, cin >> peple_name) {
//		family.emplace(make_pair( f_name,peple_name ));
//	}
//	
//}
//int main() {
//	multimap<string, string> family;
//	insert_map(family);
//	for (auto& a : family)
//	{
//		cout << "family name is        " << a.first << endl;
//		
//			cout << "member name is         " << a.second << "   ";
//	}
//		cout << endl;
//	
//}


//test 11.31
//int main() {
//	multimap<string, string> m1 = { {"tom","b1"},{"tom","a2"},{"Jerry","a3"} };
//	auto pair1 = m1.equal_range("tom");
//	if(pair1.first!=pair1.second)
//	m1.erase(pair1.first,pair1.second);
//	
//	for (auto b : m1) {
//		cout << b.first << "     " << b.second << " " << endl;
//	}
//}


//test 11.32
//bool compare(pair<string, string>& p1, pair<string, string>& p2) {
//	if (p1.second < p2.second) {
//		return true;
//	}
//	else if (p1.second == p2.second) {
//		return (p1.first < p2.first);
//	}
//	else if (p1.second > p2.second)
//		return false;
//}
//int main() {
//	multimap<string, string> m1 = { { "alan", "DMA" }, { "pezy", "LeetCode" }, { "alan", "CLRS" },
//	{ "wang", "FTP" }, { "pezy", "CP5" }, { "wang", "CPP-Concurrency" } };
//	vector<pair<string, string>>v1;
//	for (auto a : m1) {
//		v1.push_back(a);
//	}
//	sort(v1.begin(), v1.end(), compare);
//	for (auto c = v1.begin(); c != v1.end(); ++c) {
//		cout << c->first << "  " << c->second << "   " << endl;
//	}
//}


//test 11.33
//map<string, string> buildMap(ifstream& transform)
//{
//	string s1;
//	string s2;
//	map<string, string> m1;
//	while (transform >> s1 && getline(transform, s2)) {
//		if (s2.size() > 1) {
//			m1[s1] = s2.substr(1);
//		}
//		else
//			throw runtime_error("���򲻺Ϸ�");
//	}
//	return m1;
//}
//const string transform1(const string &s, map<string, string>& m1) {
//	auto c = m1.find(s);
//	if (c != m1.end()) {
//		return c->second;
//	}
//	else {
//		return s;
//	}
//
//}
//void word_transform(ifstream& transform, ifstream& initial)
//{
//	auto final_map = buildMap(transform);
//	string s1;
//	while (getline(initial, s1)) {
//		istringstream single_word(s1);//��ӵ��һ���ı������ȡ����ʱʹ�ã�ͷ�ļ�Ϊsstream
//		 string s_word;
//		while (single_word >> s_word) {
//			cout << transform1(s_word, final_map)<<" ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	ifstream transform("11.transform.txt");
//	ifstream initial("11.initial_text.txt");
//	word_transform(transform, initial);
//}



//test 11.38
//unordered_map<string, string> buildMap(ifstream& transform)
//{
//	string s1;
//	string s2;
//	unordered_map<string, string> m1;
//	while (transform >> s1 && getline(transform, s2)) {
//		if (s2.size() > 1) {
//			m1[s1] = s2.substr(1);
//		}
//		else
//			throw runtime_error("���򲻺Ϸ�");
//	}
//	return m1;
//}
//const string transform1(const string &s, unordered_map<string, string>& m1) {
//	auto c = m1.find(s);
//	if (c != m1.end()) {
//		return c->second;
//	}
//	else {
//		return s;
//	}
//
//}
//void word_transform(ifstream& transform, ifstream& initial)
//{
//	auto final_map = buildMap(transform);
//	string s1;
//	while (getline(initial, s1)) {
//		istringstream single_word(s1);//��ӵ��һ���ı������ȡ����ʱʹ�ã�ͷ�ļ�Ϊsstream
//		 string s_word;
//		while (single_word >> s_word) {
//			cout << transform1(s_word, final_map)<<" ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	ifstream transform("11.transform.txt");
//	ifstream initial("11.initial_text.txt");
//	word_transform(transform, initial);
//}
//
//


//int main() {
//	unordered_map<string, int> word_number;
//	string s1;
//	while (cin >> s1) {
//		word_number[s1]++;
//	}
//	for (const auto& c : word_number) {
//		cout << "the word is   " << c.first << "   the number is" << c.second << endl;//ע��first second��ģ������ݳ�Ա����˺��治�ܴ����š������ž��ǳ�Ա������
//	}
//}
//һ��ֱ���滻����