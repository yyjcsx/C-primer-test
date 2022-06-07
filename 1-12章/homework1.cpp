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
//是不合法的，因为加了分号以后第一行语句已经完全结束了，下面第二行语句中的<<运算符没有左侧对象，不符合语法规范。应该在每一个语句的开始加上cout，使输出运算符左右对象完整。

//test 1.7
//int main() {
//	int v1 = 0, v2 = 0;
//	/*不/*正确*/嵌套*/
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
//124能用3错误

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
//结果为770

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
//		cout << "二者相等" << endl;
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
//-100到100的累加和

//test 1.13
//int main() {
//	int sum = 0;
//	int v1, v2;
//	cin >> v1 >> v2;
//	for (int i = v1-v2-1; i > 0; i--) {
//		cout << i+v2 << endl;
//	}
//	//后面v1和v2不同大小关系的同上
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
//在for循环中，循环控制变量的初始化和修改都放在语句头部分，形式较简洁，且特别适用于循环次数已知的情况。在while循环中，循环控制变量的初始化一般放在while语句之前，循环控制变量的修改一般放在循环体中，形式上不如for语句简洁，但它比较适用于循环次数不易预知的情况（用某一条件控制循环）。两种形式各有优点，但它们在功能上是等价的，可以相互转换。

//test 1.15
//int main()
//{
//	int currVal = 0, Val = 0, bridge = 0;
//	if (cin >> currVal) {
//		int cnt = 1;
//		while (cin >> Val)//这里如果不设置停止符号的话则while会一直等待系统输入，不会跳出循环
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
//		while (cin >> Val)//这里如果不设置停止符号的话则while会一直等待系统输入，不会跳出循环
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
//		while (cin >> item2)//这里如果不设置停止符号的话则while会一直等待系统输入，不会跳出循环
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
//    Sales_item total;   // 保存下一条交易记录的变量
//     读入第一条交易记录，并确保有数据可以处理
//    if (std::cin >> total) {
//        Sales_item trans;   // 保存和的变量
//         读入并处理剩余交易记录
//        while (std::cin >> trans) {
//             如果我们仍在处理相同的书
//            if (total.isbn() == trans.isbn())
//                total += trans;     // 更新总销售额
//            else {
//                 打印前一本书的结果
//                std::cout << total << std::endl;
//                total = trans;      // total 现在表示下一本书的销售额
//            }
//        }
//        std::cout << total << std::endl;    // 打印最后一本书的结果
//    }
//    else {
//         没有输入！警告读者
//        std::cerr << "No data?!" << std::endl;
//        return -1;  // 表示失败
//    }
//    return 0;
//}

