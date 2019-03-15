
//答案？

#include <iostream> 
#include <cassert> 
using namespace std;
class zrf_Ratio
{
	friend ostream&operator<<(ostream&, const zrf_Ratio&);
	friend istream&operator>>(istream&, zrf_Ratio&);
	friend bool operator==(const zrf_Ratio&, const zrf_Ratio&);
	friend bool operator<(const zrf_Ratio&, const zrf_Ratio&);
public:
	zrf_Ratio(int = 0, int = 1);
	zrf_Ratio(const zrf_Ratio&);

private:
	int num;
	int den;
	void reduce();//化为最简分数
};
//补充完整构造函数
ostream&operator<<(ostream&, const zrf_Ratio&) {


	 }



//公有成员函数:
zrf_Ratio::zrf_Ratio(int num, int den) : num(num), den(den)
{
	reduce();
}

zrf_Ratio::zrf_Ratio(const zrf_Ratio& r) : num(r.num), den(r.den)
{

}

//私有成员函数:
void swap(int &m, int &n)
{
	int t;
	t = m;
	m = n;
	n = t;
}

int zrf_Gcd(int m, int n)
{
	if (m < n)
		swap(m, n);
	assert(n >= 0);
	while (n > 0)
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

void zrf_Ratio::reduce()
{
	if (num == 0 || den == 0)
	{
		num = 0;
		den = 1;
		return;
	}
	if (den < 0)
	{
		den *= -1;
		num *= -1;
	}
	if (num == 1)
		return;
	int sgn = (num < 0 ? -1 : 1);
	int g = zrf_Gcd(sgn*num, den);
	num /= g;
	den /= g;
}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> b >> c >> d;
	zrf_Ratio zrf(a, b), ssh(c, d);
	cout << "zrf is:" << zrf << "; ssh is:" << ssh << '\n';
	cout << "(zrf==ssh) is:" << (zrf == ssh) << "; (zrf<ssh) is:" << (zrf < ssh) << endl;
	return 0;

}


//自己写的答案
//#include<iostream>
//#include<string>
//using namespace std;
//class dispose {
//public:double result;
//	   int x, y;
//public: dispose(int n, int m) {
//
//	double a, b;
//	a = n; b = m;
//	result = a / b;
//
//	//***************************
//	//化简处理
//	for (int i = 2; i <= n; i++) {
//		if (n%i == 0 && m%i == 0) {
//			n /= i;
//			m /= i;
//			i = 2;
//		}
//	}
//	x = n; y = m;
//}
//		void output() {
//			if (y == 0) {
//				cout << x;
//			}
//			else
//			{
//				cout << x << '\\' << y;
//			}
//		}
//};
//int main() {
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	//string n = dispose(a, b);
//	dispose n = dispose(a, b),m=dispose(c,d);
//
//	std::cout << "zrf is:"  ; 
//	n.output();
//	cout << "; ssh is:" ;
//	m.output();
//	cout<< '\n';
//	std::cout << "(zrf==ssh) is:" << (n.result == m.result) << "; (zrf<ssh) is:" << (n.result < m.result) << endl;	
//	return 0;
//}

