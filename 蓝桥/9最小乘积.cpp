#include<iostream>
#include <algorithm>		//sort()�������Ŀ�
#include<math.h>
#include<fstream>
using namespace std;


//��С�˻�
int kk() {
	int n, arr[8], brr[8], add = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}
	sort(arr, arr + n, greater<int>());		//��������
	sort(brr, brr + n, less<int>());		//��������
	for (int i = 0; i < n; i++) {
		add = add + (arr[i] * brr[i]);
	}
	return add;
}
int main() {
	int T, arr[1000];
	cin >> T;
	for (int i = 0; i < T; i++) {
		arr[i] = kk();
	}
	for (int i = 0; i < T; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}