#include<iostream>
#include<sstream>
#include<fstream>
#include"check_string_size.h"
using namespace std;
int main() {
	ifstream in("14.38.txt");
	string s1;
	int check_number_less_than_10 = 0;
	int check_number_more_than_10 = 0;
	while (getline(in, s1))
	{	
		cout << "read one line" << endl;
		string s2;
		check_string_size css1(9);
		istringstream i2(s1);
		while (i2 >> s2)
		{
			//cout << s2 << endl;
			if (css1(s2) == 1)
				check_number_less_than_10++;
			if (css1(s2) == 2)
				check_number_more_than_10++;
			
		}
		cout << endl;

	}
	cout << "����С��10�ĵ�����" << check_number_less_than_10 << "��" << endl;
	cout << "���ȴ���10�ĵ�����" << check_number_more_than_10 << "��" << endl;
}