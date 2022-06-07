#include"String.h"
using std::lexicographical_compare;
allocator<char> String::a;

void String::free() {
	if(p){
		for (auto c = p; c != p + sz; ++c) {
			a.destroy(c);
			
		}
		a.deallocate(p, sz);
	}
	
}

void String::swap(String& s1) {
	char* temp = p;
	p = s1.p;
	s1.p = temp;
	size_t new_sz = sz;
	sz = s1.sz;
	s1.sz = new_sz;
}

String& String::operator=(const String& s1) {
	char* new_p = a.allocate(s1.sz);
	size_t new_sz = s1.sz;
	free();

	p = new_p;
	sz = new_sz;
	uninitialized_copy(s1.p, s1.p + sz, p);
	cout << "ִ���˿�����ֵ�����" << *(s1.p) << endl;
	return *this;

}
String& String::operator=(String&& s1) {
	if (&s1 != this) {
		free();
		p = s1.p;
		sz = s1.sz;
		uninitialized_copy(make_move_iterator(s1.p), make_move_iterator(s1.p + sz), p);
		s1.p = nullptr;
	}
	return *this;
}




String& String::operator=(const char* c1) {
	char* new_p = a.allocate(strlen(c1));
	size_t new_sz = strlen(c1);
	free();
	p = new_p;
	sz = new_sz;
	uninitialized_copy(c1, c1 + strlen(c1), p);
	return *this;
}
String& String::operator=(const char t) {
	free();
	p = a.allocate(1);
	uninitialized_fill_n(p, 1, t);
	return *this;
}

ostream& print(ostream& os,const String& s1) {
	const char* p = s1.begin();
	while (p != s1.end()) {
		os << *p++;
	}
	return os;
}

ostream& operator<<(ostream& os, const String& s1) {//�����ö���ȥ��⣬ǰ���print��<<�����char���͵ģ����Բ���Ҫ���������
	return print(os, s1);							//��������<<������String�ģ�������Ҫ�������ط���������޷�ʶ����ʵ���൱�ڵ�����print����
}

bool operator<(const String& s1, const String& s2) {
	return lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end());
}

char& String::operator[](size_t n) {
	return *( p+n );
}
//����Ҫ��һ��char*�����ַ����л�ȡÿ���ַ�ʱ�����Բ�ȡp[n]��������ķ�ʽ
const char& String:: operator[](size_t n) const {
	return *(p + n);//��ָ�뿴������ͷ
}
String& String::operator++() {
	
}
//String& String::operator--();
//String String::operator++(int);
//String String::operator--(int);