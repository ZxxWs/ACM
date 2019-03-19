#include <iostream>

using namespace std;

int main() {
	int ai, aj, bi, bj;
	int arr[9999][9999], brr[9999][9999], crr[9999][9999] = { 0 };
	cin >> ai >> aj;
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < aj; j++)
			cin >> arr[i][j];
	}
	cin >> bi >> bj;
	for (int i = 0; i < bi; i++) {
		for (int j = 0; j < bj; j++)
			cin >> brr[i][j];
	}
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < bj; j++) {
			for (int xx = 0; xx < aj; xx++) {
				crr[i][j] += arr[i][xx] + brr[xx][j];
			}
		}
	}
	for (int i = 0; i < ai; i++) {
		for (int j = 0; j < bj; j++) {
			
				cout<<crr[i][j]<<'\0' ;
			
		}
		cout << endl;
	}



	return 0;
}



