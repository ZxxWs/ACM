#include"iostream"
#include"string"
using namespace std;

//P1001  大数相乘：思路\数组的解决办法
int main() {
	string a, b, c;
	int aa[8] = { 0 }, bb[8] = { 0 }, cc[18] = { 0 };
	cin >> a;//>> b;
	for (int i = 0; i < a.length(); i++) {
		aa[i] = a[a.length() - i - 1]-'0';
		cout << aa[i];
	}
	for (int i = 0; i < b.length(); i++) {
		bb[i] = b[b.length() - i - 1] - '0';
	}



	return 0;
}