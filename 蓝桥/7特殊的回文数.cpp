//
//
//
//#include<iostream>
//#include <algorithm>		//sort()ÅÅÐòº¯ÊýµÄ¿â
//#include<math.h>
//#include<fstream>
//using namespace std;
//
//int huiwen(int i, int n) {
//	int a, b, c, d, e, f = 0;
//	if (i < 100000) {
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		e = (i / 10000);
//		if ((a != e) || (b != d))
//			return 0;
//	}
//	else {
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		e = (i / 10000) % 10;
//		f = (i / 100000);
//		if ((a != f) || (b != e) || (c != d))
//			return 0;
//	}
//	if ((a + b + c + d + e + f) == n)
//	{
//		cout << i << endl;
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main() {
//	int flag = 0, n;
//	cin >> n;
//	for (int i = 10000; i < 1000000; i++) {
//		flag = flag + huiwen(i, n);
//	}
//	if (flag == 0)
//		cout << -1;
//	return 0;
//}
