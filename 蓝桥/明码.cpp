//#include<iostream>
//
//using namespace std;
//
//void print(int a) {
//	int arr[8] = { 0 };
//	for (int i = 0; i < 8; i++) {
//		arr[i] = a % 2;
//		a /= 2;
//	}
//	for (int i = 7; i >= 0; i--) {
//		if (arr[i] == 1) {
//			cout << "*";
//			continue;
//		}
//		cout << arr[i];
//	}
//
//}
//int main() {
//	int a, b, arr[8] = { 0 };
//	for (int i = 0; i < 330; i++) {
//		cin >> a;
//		print(a);
//		if (i % 2 != 0)
//			cout << endl;
//	}
//	return 0;
//}
//
////int main() {
////	int a = 9;
////	for (int i = 1; i < 9; i++) {
////		a *= 9;
////	}
////	cout << a;
////	return 0;
////}