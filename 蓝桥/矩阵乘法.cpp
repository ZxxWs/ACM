//#include<iostream>
//using namespace std;
//int main() {
//	long long arr[1000], n;
//	cin >> n;
//	for (long long i = 0; i <= n; i++)
//		cin >> arr[i];
//
//
//
//
//	long long mix=0x3f3f3f3f, num=0;
//	long long t1, t2, t3;
//	long long add=0;
//	for (long long j = 1; j < n; j++) {
//		for (long long i = 0; i < n -j-2; i++) {
//			num = arr[i] * arr[i + 1] * arr[i + 2];
//			if (num < mix) {
//				t1 = i;
//				t2 = i + 1;
//				t3 = i + 2;
//				mix = num;
//			}
//		}
//		add += mix;
//		arr[t2] = 0;
//		for (int k = t2; k < n - j - 3; k++)
//			arr[k] = arr[k + 1];
//	}
//	cout << add;
//
//
//
//	return 0;
//}
//
//
