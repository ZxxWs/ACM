#include"iostream"

using namespace std;

//int main() {//Çó½×³Ë
//	long long n, m=1;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		m =m*i;
//	}
//	cout << m;
//}

int main() {//P0505(80%)
	int n;
	cin >> n;
	long long m=1;
	for (int i = 1; i <= n; i++)
	{
		m = m * i;
		while (m>1000000000)
		{
			m -= 100000000;
		}
	}
	for (int i = 10;; i *= 10) {
		if (m%i != 0) {
			m = m %i;
			cout << m / (i / 10);
			return 0;
		}
	}
	
	
}