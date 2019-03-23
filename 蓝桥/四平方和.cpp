//#include<iostream>
//
//using namespace std;
//int tt(int i) {
//
//	int n = 0;
//
//	while (0 < i - (n*n)  ) {
//		if (i / 4 > n*n) {
//			n++;
//		}
//		else
//		{
//			return n+1;
//		}
//	}
//	return n;
//}
//int main() {
//	int a=0, b=0, c=0, d=0, x;
//	cin >> x;
//	d = tt(x);
//	c = tt(x - (d * d));
//	b = tt(x - (d*d) - (c*c));
//	a = tt(x - (d*d) - (c*c)-(b*b));
//	cout << a << '\0' << b << '\0' << c << '\0' << d;
//
//
//	return 0;
//}