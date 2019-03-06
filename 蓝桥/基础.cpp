#include<iostream>
#include <algorithm>		//sort()排序函数的库
#include<math.h>
#include<fstream>
using namespace std;

//数组排序
//int main() {        
//	int n,m[200];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> m[i];
//	}
//	sort(m, m+n,less<int>());
//	for (int i = 0; i < n; i++) {
//		cout<<m[i]<<'\0';
//	}
//	return 0;
//}

//进制转化
//int main() {
//
//	int m[10], n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> hex >> m[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cout << oct << m[i] << endl;
//	}
//	return 0;
//}
 
//特殊回文数
//int huiwen(int i,int n){
//	int a, b, c, d, e, f=0;
//	if (i < 100000) {
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		e = (i / 10000) ;
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
//	int flag = 0,n;
//	cin >> n;
//	for (int i = 10000; i < 1000000; i++) {
//		flag=flag+huiwen(i, n);
//	 }
//	if (flag == 0)
//		cout << -1;
//	return 0;
//}

////一般回文数
//int main() {
//
//	for (int i = 1000; i < 10000; i++) {
//		int n = i;
//		if (((n / 1000 )== (n % 10) )&& (((n / 100)%10) == ((n / 10)%10)))
//		{
//			cout << i<<endl;
//		}
//	}
//
//	return 0;
//}

//立方数
//int main() {
//	int a, b, c;
//	for (int i = 100; i < 1000; i++) {
//		a = i / 100;
//		b = i % 10;
//		c = (i / 10) % 10;
//		c = pow(a, 3) + pow(b, 3) + pow(c, 3);
//		if (c == i)
//			cout << c << endl;
//	}
//	return 0;
//}

//六国出五人---未完
//#include <stdio.h>
//#define N 6		//一共六个国家
//#define M 5		//一共五个人
//#define BUF 1024
//
//void f(int a[], int k, int m, char b[])//m是5个人
//{
//	int i, j;
//
//	if (k == N) {
//		b[M] = 0;
//		if (m == 0) printf("%s\n", b);
//		return;
//	}
//
//	for (i = 0; i <= a[k]; i++) {
//		for (j = 0; j < i; j++) 
//			b[M - m + j] = k + 'A';
//		f(a, 0, M ,b);                          //填空位置
//	}
//}
//int main()
//{
//	int  a[N] = { 4,2,2,1,1,3 };
//	char b[BUF];
//	f(a, 0, M, b);
//	return 0;
//}

//文件读取学习
//int main() {
//
//	ifstream cin("C:\\Users\\Zxx\\Desktop\\test.txt");
//	/*int a;
//	while (cin>>a)
//	{
//		cout << a*a << endl;
//	}*/
//
//
//	return 0;
//}

////ACM学习----面积的计算
//int main() {
//
//	int a, b;
//	while (cin>>a>>b)
//	{
//		if ((a*b) >= 240)
//			cout << (float)(a*b) / 240 << "MU" << endl;
//		else
//			cout << (a*b) <<"BU"<< endl;
//	}
//
//
//	return 0;
//}

////大小写转化
//int main() {
//	char hom[20];
//	int i = 0;
//	cin >> hom;
//	while (hom[i]!=0)
//	{
//		if ('a' <= hom[i] &&hom[i]<= 'z')
//		{
//			(hom[i]=char(hom[i]-32));
//			i++;
//			continue;
//		}
//		if ('A' <= hom[i]&&hom[i] <= 'Z')
//		{
//			hom[i] = char(hom[i] + 32);
//			i++;
//			continue;
//		}	
//	}
//	cout << hom;
//	return 0;
//}

//三数排序
//int main() {
//
//
//	int a[3],b;
//	cin >> a[0] >> a[1] >> a[2];
//	if (a[2] > a[1])
//	{
//		b = a[2];
//		a[2] = a[1];
//		a[1] = b;
//	}
//	if (a[1] > a[0])
//	{
//		b = a[1];
//		a[1] = a[0];
//		a[0] = b;
//	}
//	if (a[2] > a[1])
//	{
//		b = a[2];
//		a[2] = a[1];
//		a[1] = b;
//	}
//	cout << a[0] <<'\0'<< a[1]<<'\0' << a[2];
//	return 0;
//}

//栋栋的数字游戏
////int main() {
////	int num[100000],n,k,t,x=1,m=1;
////	num[0] = 1;
////	cin >> n>>k>>t;
////	for (int j = 1; j <=t; j++)
////	{
////		for (int i = 1; i < n; i++) {
////			num[i] = num[i - 1] + m;
////			m++;
////			while (num[i] >= k) {			//坑！！！！
////				num[i] -= k;
////			}
////			if (i == n - 1) {
////				num[0] = num[i] + m;
////				m++;
////				while (num[0] >= k) {			//坑！！！！
////					num[0] -=k;
////				}
////				if (j == t)
////					break;
////				x = x + num[0];
////			}
////		}
////	}
////	cout << x;
////	return 0;
////}
//int main() {
//	int n, k, T;
//	int x = 1, X=0, m = 1, mm = 1;
//	cin >> n>>k>>T;
//	for (int i = 1; i <T; i++) {
//		X = ((1 + (n*i))*(n*i)) / 2;
//		while (X>=k)
//		{
//			X %= k;
//		}
//		x = x + X+1;
//	}
//	cout << x;
//	return 0;
//}

//邮局问题
//typedef struct home
//{
//	int x;
//	int y;
//}home;
//typedef struct post
//{
//	int x;
//	int y;
//	double distance;
//}post;
//int main() {
//	int  n,m,k;			//n个住户，m个邮局，k个选取
//	cin >> n >> m >> k;
//	home hom[50];
//	post pos[25];
//	for (int i = 0; i < n; i++) {
//		cin >> hom[i].x >> hom[i].y;
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> pos[i].x >> pos[i].y;
//	}
//	//for (int i = 0; i < m; i++) {
//	//	double dis = 0;
//	//	for (int j = 0; j < n; j++) {
//	//		dis = dis+sqrt(((pos[i].x - hom[j].x)*(pos[i].x - hom[j].x)) + ((pos[i].y - hom[j].y)*(pos[i].y - hom[j].y)));
//	//	}
//	//	pos[i].distance = dis;
//	//}
//	//for (int i = 0; i < k; i++) {
//	//	int nn = 0;
//	//	double dd = 99999999;
//	//	for (int j = 0; j < n; j++) {
//	//		if (dd > pos[j].distance) {
//	//			dd = pos[j].distance;
//	//			nn = j;
//	//		}
//	//	}
//	//	pos[nn].distance = 99999999;
//	//	cout << nn+1 << '\0';
//	//}
//	return 0;
//}

//简单四则运算
//void jia(int a, int b) {
//	cout << a + b;
//}
//void jian(int a, int b) {
//	cout << a - b;
//}
//void cheng(int a, int b) {
//	cout << a * b;
//}
//void chu(int a, int b) {
//	cout << a / b;
//}
//int main() {
//	int a, b;
//	char c;
//	cin >> c >> a >> b;
//	switch (c)
//	{
//	case'+':
//		jia(a, b);
//		break;
//	case'-':
//		jian(a, b);
//		break;
//	case'*':
//		cheng(a, b);
//		break;
//	case'/':
//		chu(a, b);
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//最小乘积
//int kk() {
//	int n,arr[8],brr[8],add=0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cin>> brr[i];
//	}
//	sort(arr, arr + n,greater<int>());		//升序排序
//	sort(brr, brr + n, less<int>());		//降序排序
//	for (int i = 0; i < n; i++) {
//		add = add + (arr[i] * brr[i]);
//	}
//	return add;
//}
//int main() {
//	int T,arr[1000];
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		arr[i]=kk();
//	}
//	for (int i = 0; i < T; i++) {
//		cout<<arr[i]<<endl;
//	}
//	return 0;
//}

//C++ CH08 01  
//int main() {
//
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	
//	int n = 2;
//	while (true)
//	{
//		if ((a%n == 0) && ((b%n) == 0)) {
//			a /= n;
//			b /= n;
//			n = 2;
//			continue;
//		}
//		n++;
//		if ((n > a) || (n > b)) {
//			cout <<"zrf is:"<< a << '/' << b<<';';
//			break;
//		}
//	}
//	n = 2;
//	while (true)
//	{
//		if ((c%n == 0) && ((d%n) == 0)) {
//			c /= n;
//			d /= n;
//			n = 2;
//			continue;
//		}
//		n++;
//		if ((n > c) || (n > d)) {
//			cout <<"ssh is:"<< c << '/' << d << endl;
//			break;
//		}
//	}
//	int q=0, p=0;
//	if ((double)(a / b) == (double)(c / d)) {
//		q = 1;
//	}
//	if ((double)(a / b) < (double)(c / d)) {
//		p = 1;
//	}
//	cout << "(zrf==ssh) is:" << q << ';';
//	cout << "(zrf<ssh) is:" << p;
//	return 0;
//}

// 递归求二项式系数值
//
//int num(int k, int n) {
//	if ((k == 0) || (k == n))
//	{
//		return 1;
//	}
//	else
//	{
//		return num(k, n - 1) + num(k - 1, n - 1);
//	}
//}
//int main() {
//	int k, n;
//	cin >> k >> n;
//	int add= num(k, n);
//	cout<<add;
//	return 0;
//}



