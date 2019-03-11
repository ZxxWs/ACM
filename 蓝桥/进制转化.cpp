//#include<iostream>
//#include <algorithm>		//sort()排序函数的库
//#include<math.h>
//#include<string>
//#include<stack>
//using namespace std;
////hex:十六进制
////oct:八进制
////dec:十进制
//
//
////十进制转x(8)进制：将原数对x取余
//char yu(int i) {
//	int m = i % 8;
//	if (m >= 0 && m < 10) {
//		return char(m + '0');
//	}
//	switch (m)
//	{
//	case 10:
//		return 'A';
//	case 11:
//		return 'B';
//	case 12:
//		return 'C';
//	case 13:
//		return 'D';
//	case 14:
//		return 'E';
//	case 15:
//		return 'F';
//	}
//}
//
//int main() {
//	stack<char> m;
//	int n;
//	cin >> n;
//	if (n == 0) {
//		cout << 0;
//		return 0;
//	}
//	while (n > 0)				//考虑到初始值就为0！！！
//	{
//		m.push(yu(n));
//		n /= 8;
//	}
//	while (!(m.empty())) {
//
//		cout << m.top();
//		m.pop();
//	}
//	return 0;
//}
////int main() {
////	int a;
////	cin >>dec>>a;
////	//cout << hex << a;//    ***输出的字母为小写的
////
////
////	return 0;
////}
////
////long long  add(char n,int l,int len) {
////	long long m;
////	int le=1;
////	if (n >= '0'&&n <= '9') {
////		m =(n - '0');
////	}
////	else
////	{
////		m =(n - 'A')+10;
////	}
////	for (int i = 1; i <len - l; i++) {
////		le *= 16;
////	}
////	return m * le;
////
////}
////int main() {
////	string a;
////	cin >> a;
////	int len = a.length();
////	long long b = 0;
////	for (int i = len-1; i >= 0; i--) {
////		b += add(a[i],i,len);
////	}
////	cout << b;
////	return 0;
////}