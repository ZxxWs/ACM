//#include<iostream>
//
//using namespace std;
//
//int n;
//int s[100] = { 0 };
//int f[100] = { 0 };
//bool a[100] = { 0 };
//int ActiveManage() {
//
//	a[1] = 1;
//	int j = 1, cout = 1;
//	for (int i = 2; i <= n; i++) {
//		if (s[i] >= f[j]) {
//			a[i] = 1;
//			j = i;
//			cout++;
//		}
//		else
//			a[i] = 0;
//	}
//	return cout;
//
//}
//
//int main()//
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> s[i] >> f[i];
//	}
//	
//	cout<<ActiveManage();
//}
