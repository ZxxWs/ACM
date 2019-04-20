////#include<iostream>
////
////using namespace std;
////
////int n;
////int s[100] = { 0 };
////int f[100] = { 0 };
////bool a[100] = { 0 };
////int ActiveManage() {
////
////	a[1] = 1;
////	int j = 1, cout = 1;
////	for (int i = 2; i <= n; i++) {
////		if (s[i] >= f[j]) {
////			a[i] = 1;
////			j = i;
////			cout++;
////		}
////		else
////			a[i] = 0;
////	}
////	return cout;
////
////}
////
////int main()//
////{
////	cin >> n;
////	for (int i = 0; i < n; i++) {
////		cin >> s[i] >> f[i];
////	}
////	
////	cout<<ActiveManage();
////}
//#include <iostream>
//#include <string>
//using namespace std;
//
////int main()
////{
////	int j;
////	int n;
////	//string S;
////	//string T;
////	char S[100],T[100];
////	cin >> n;
////	for (int i = 0; i < n; i++)
////		cin >> S[i];
////	int x = 0, y = n - 1;
////	for (j = 0; j < n; j++)
////	{
////		if (S[x] >= S[y])
////		{
////			T[j] = S[y];
////			y--;
////			continue;
////		}
////		else
////		{
////			T[j] = S[x];
////			x++;
////			continue;
////		}
////	}
////	for (int i = 0; i < n; i++)
////		cout << T[i];
////
////
////	return 0;
////}
//int main()
//{
//	int j;
//	int n;
//	cin >> n;
//	string S;
//	string T;
//	cin >> S;
//	T = S;
//	int x = 0, y = n - 1;
//	for (j = 0; j < n; j++)
//	{
//		if (S[x] >= S[y])
//		{
//			T[j] = S[y];
//			y--;
//			continue;
//		}
//		else
//		{
//			T[j] = S[x];
//			x++;
//			continue;
//		}
//	}
//	cout << T;
//
//	return 0;
//}