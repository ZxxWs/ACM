#include<iostream>
#include <algorithm>		//sort()ÅÅĞòº¯ÊıµÄ¿â
#include<math.h>
#include<fstream>
using namespace std;


//×îĞ¡³Ë»ı
int kk() {
	int n, arr[8], brr[8], add = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}
	sort(arr, arr + n, greater<int>());		//ÉıĞòÅÅĞò
	sort(brr, brr + n, less<int>());		//½µĞòÅÅĞò
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