#include"iostream"
#include"string"
#include"stack"
using namespace std;

//P1001  ������ˣ�˼·\����Ľ���취
//int main() {
//	string a, b;
//	int aa[8] = { 0 }, bb[8] = { 0 }, cc[16] = { 0 };
//	
//	cin >> a>> b;
//	int al = a.length(), bl = b.length();
//
//	for (int i = 0; i < al; i++) {
//		aa[i] = a[al - i - 1]-'0';
//	}
//	for (int i = 0; i < bl; i++) {
//		bb[i] = b[bl - i - 1] - '0';
//	}
//	if (al < 2 && bl < 2) {
//		cout << aa[0] * bb[0];
//	}
//	else
//	{
//	//b�е�ÿһλ��a;
//
//	int m=0;//c�ı�־λ
//	for (int i = 0; i < bl; i++) {
//		m=i;  
//		for (int j = 0; j < al; j++) {
//			cc[m] = (bb[i] * aa[j])+cc[m];//c�е����ֿ��ܴ���10��
//			m++;
//		}
//		//cout << m <<endl;
//	}
//	//cout << m;
//	stack<int> outcc;
//	int tag=0;
//	for (int i = 0; i <= m; i++) {
//		
//		if (cc[i]+tag< 10) {
//			outcc.push(cc[i]+tag);
//			tag = 0;
//		}
//		else
//		{
//			cc[i] += tag;
//			tag = cc[i] / 10;
//			outcc.push(cc[i] % 10);
//		}
//		if (i == m && tag != 0) {
//			outcc.push(tag);
//		}
//	}
//	//cȫ���������
//	while (!outcc.empty())
//	{
//		cout << outcc.top();
//		outcc.pop();
//	}
//	}
//	return 0;
//}
//int main() {				//???
//	long long a, b, c;
//	cin >> a >> b;
//	cout << a * b;
//	return  0;
//}