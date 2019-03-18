//#include<iostream>
//
//using namespace std;
//
//
//int main() {
//
//	int arr[1000];
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int num = arr[0];
//	for (int i = 1; i < n; i++) {
//		
//		if (num+arr[i] >= arr[i]) {
//			num += arr[i];
//			continue;
//		}
//		if (num+arr[i] < arr[i]) {
//			num = arr[i];
//			continue;
//		}
//	}
//	cout << num;
//	return 0;
//}
