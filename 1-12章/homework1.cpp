//#include<iostream>
//#include "Sales_item.h"
//#include<string.h>
//using namespace std;

//test 1.3
//int main()
//{
//	cout<<"hello world!"<<endl;
//	return 0;
//}

//test 1.4
//int main()
//{
//	int v1 = 0, v2 = 0;
//	cin >> v1 >> v2;
//	cout << "v1*v2="<<v1 * v2 << endl;
//	return 0;
//}

//test 1.5
//int main() {
//	int v1 = 0, v2 = 0;
//	cin >> v1;
//	cin >> v2;
//	cout << "v1*v2=";
//	cout << v1 * v2;
//	cout << endl;
//	return 0;
//}

//test 1.6
//�ǲ��Ϸ��ģ���Ϊ���˷ֺ��Ժ��һ������Ѿ���ȫ�����ˣ�����ڶ�������е�<<�����û�������󣬲������﷨�淶��Ӧ����ÿһ�����Ŀ�ʼ����cout��ʹ�����������Ҷ���������

//test 1.7
//int main() {
//	int v1 = 0, v2 = 0;
//	/*��/*��ȷ*/Ƕ��*/
//	cin >> v1;
//	cin >> v2;
//	cout << "v1*v2=";
//	cout << v1 * v2;
//	cout << endl;
//	return 0;
//}

//test 1.8
//int main() {
//
//	cout << "/*";
//	cout << "*/";
//	cout <</* "*/" /*"/*"/*"*/;
//	return 0;
//}
//124����3����

//test 1.9
//int main()
//{
//int v1 = 50, v2 = 100;
//int i =0;
//int sum = 0;
//while (v1 <= 100) {
//	v1 += i;
//	i++;
//	sum += v1;
//}
//cout << sum << endl;
//return 0;
//}
//���Ϊ770

//test 1.10
//int main() {
//	int v1 = 10;
//	int sum = 0;
//	while (v1 >= 0) {
//		sum += v1;
//		v1--;
//	}
//	cout << sum << endl;
//	return 0;
//}

//test 1.11
//int main() {
//	int v1, v2;
//	cin >> v1 >> v2;
//	if (v1 == v2) {
//		cout << "�������" << endl;
//	}
//	if (v1 > v2) {
//		while (v2 < v1-1) {
//			cout << ++v2 << endl;
//		}
//
//	}
//	if (v2 > v1) {
//		while (v1 < v2-1) {
//			cout << ++v1 << endl;
//		}
//
//	}
//
//	return 0;
//}

//test 1.12
//-100��100���ۼӺ�

//test 1.13
//int main() {
//	int sum = 0;
//	int v1, v2;
//	cin >> v1 >> v2;
//	for (int i = v1-v2-1; i > 0; i--) {
//		cout << i+v2 << endl;
//	}
//	//����v1��v2��ͬ��С��ϵ��ͬ��
//	
//	return 0;
//}

//int main() {
//	int sum = 0, value = 0;
//	while (std::cin >> value) {
//		sum += value;
//		std::cout << "sum is" << sum << std::endl;
//	}
//
//	return 0;
//}

//test1.14
//��forѭ���У�ѭ�����Ʊ����ĳ�ʼ�����޸Ķ��������ͷ���֣���ʽ�ϼ�࣬���ر�������ѭ��������֪���������whileѭ���У�ѭ�����Ʊ����ĳ�ʼ��һ�����while���֮ǰ��ѭ�����Ʊ������޸�һ�����ѭ�����У���ʽ�ϲ���for����࣬�����Ƚ�������ѭ����������Ԥ֪���������ĳһ��������ѭ������������ʽ�����ŵ㣬�������ڹ������ǵȼ۵ģ������໥ת����

//test 1.15
//int main()
//{
//	int currVal = 0, Val = 0, bridge = 0;
//	if (cin >> currVal) {
//		int cnt = 1;
//		while (cin >> Val)//�������������ֹͣ���ŵĻ���while��һֱ�ȴ�ϵͳ���룬��������ѭ��
//		{
//			if (Val == currVal)
//				++cnt;
//			else {
//				cout << currVal << " occurs " << cnt << "times" << endl;
//				bridge = currVal;
//				currVal = Val;
//				cnt = 1;
//			}
//			if (Val == '0')
//				break;
//		}
//		cout << bridge << " occurs " << cnt << " times" << endl;
//
//	}
//	return 0;
//}

//test 1.20
//
//int main() {
//	Sales_item item1, item2;
//	cin >> item1 ;
//	cout << item1 << endl;
//	return 0;
//}


//test 1.21,1.22
//int main() {
//	Sales_item item1, item2;
//	cin >> item1 >>item2;
//	cout << item1+item2 << endl;
//	return 0;
//}

//test 1.23

//int main()
//{
//	int currVal = 0, Val = 0, bridge = 0;
//	if (cin >> currVal) {
//		int cnt = 1;
//		while (cin >> Val)//�������������ֹͣ���ŵĻ���while��һֱ�ȴ�ϵͳ���룬��������ѭ��
//		{
//			if (Val == currVal)
//				++cnt;
//			else {
//				cout << currVal << " occurs " << cnt << "times" << endl;
//				bridge = currVal;
//				currVal = Val;
//				cnt = 1;
//			}
//			if (Val == '0')
//				break;
//		}
//		cout << bridge << " occurs " << cnt << " times" << endl;
//
//	}
//	return 0;
//}

//test 1.23,4
//int main()
//{
//	Sales_item item1, item2, bridge;
//	if (cin >> item1) {
//		int cnt = 1;
//		while (cin >> item2)//�������������ֹͣ���ŵĻ���while��һֱ�ȴ�ϵͳ���룬��������ѭ��
//		{
//			if (item2.isbn() == item1.isbn())
//				++cnt;
//			else {
//				cout << item1.isbn() << " occurs " << cnt << "times" << endl;
//				bridge = item1;
//				item1 = item2;
//				cnt = 1;
//			}
//
//		}
//		cout << bridge.isbn() << " occurs " << cnt << " times" << endl;
//
//	}
//	return 0;
//}

//test 1.25
//#include <iostream>
//#include "Sales_item.h"
//
//int main() {
//    Sales_item total;   // ������һ�����׼�¼�ı���
//     �����һ�����׼�¼����ȷ�������ݿ��Դ���
//    if (std::cin >> total) {
//        Sales_item trans;   // ����͵ı���
//         ���벢����ʣ�ཻ�׼�¼
//        while (std::cin >> trans) {
//             ����������ڴ�����ͬ����
//            if (total.isbn() == trans.isbn())
//                total += trans;     // ���������۶�
//            else {
//                 ��ӡǰһ����Ľ��
//                std::cout << total << std::endl;
//                total = trans;      // total ���ڱ�ʾ��һ��������۶�
//            }
//        }
//        std::cout << total << std::endl;    // ��ӡ���һ����Ľ��
//    }
//    else {
//         û�����룡�������
//        std::cerr << "No data?!" << std::endl;
//        return -1;  // ��ʾʧ��
//    }
//    return 0;
//}

