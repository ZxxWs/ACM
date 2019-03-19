#include<iostream>
using namespace std;
//合并石子								*** 未完 ***
int main() {
	long long n, arr[1000] = { 0 };//arr为输入的石子
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	long long num,add=0;
	int flag;
	for (int j = 1; j < n; j++) {
		num = 0x3f3f3f3f;
		flag = 0;
		for (int i = 0; i<n-j; i++) {
			if (num > arr[i] + arr[i + 1]) {
				num = arr[i] + arr[i + 1];
				flag = i;
			}
		}
		arr[flag] = num;
		for (int i = flag + 1; i <n - j; i++) {
			arr[i] = arr[i + 1];
		}
		add += num;
	}






	//废代码
	//for (int i = 1; i < n; i++) {			//n-1次合并

	//	long long flag = 0x3f3f3f3f;
	//	long long tag;
	//	for (int j = 0; j < n-i; j++) {
	//		brr[j] = arr[j] + arr[j + 1];
	//		if (brr[j] < flag)
	//		{
	//			flag = brr[j];
	//			tag = j;
	//		}
	//	}
	//	num += flag;
	//	arr[tag] = flag;
	//	for (int k = tag+1;; k++) {
	//		if (arr[k+1] == 0) {
	//			arr[k] = 0;
	//			break;
	//		}
	//		arr[k] = arr[k+1];
	//	}


	//}
	cout << add;
	return 0;
}