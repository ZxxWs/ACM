//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//////�����ǽ���ת�����������ϸ�����������ʽ��
////////hex:ʮ������
////////oct:�˽���
////////dec:ʮ����
////
////int jin(char a,int i) {
////	int m;
////	i = 2 - i;
////	if (a <= '9'&&a >= '0')
////		m=(a - '0');
////	else
////	{
////		m=(a - 'A') + 10;
////	}
////	for (int x = 0; x < i; x++)
////		m *= 16;
////	return m;
////}
////int main() {
////	char a;
////	int x=0;
////	//string s;
////	for (int i = 0; i < 3; i++) {
////		cin >> a;
////		if (i == 0) { cout << "Hex: " << "0x"; }
////		x = jin(a, i) + x;
////		cout << a;
////	}
////	cout << endl;
////	cout << "Decimal: ";
////	
////
////	cout << x << endl;
////
////
////
////	cout << "Octal: ";		//	����˽��ƣ���֤��λ
////	if (x <= 511&&x>69) {
////		cout << "0";
////	}
////	if (x <= 69 && x > 7) {
////		cout << "00";
////	}
////	if (x <= 7 ) {
////		cout << "000";
////	}
////	cout << oct << x;
////
////	return 0;
////}
//int main() {
//
//	int x;
//	cin >> hex >> x;
//
//
//
//	cout <<hex<< x<<endl;
//	cout << dec << x << endl;
//
//	cout << setfill('0')<< setw(4)<< oct << x << endl;
//	//setw()����������
//	//setfill('$')��Ȳ�����$���
//	return 0;
//}
//
//
////cout.setf(ios::hex); //������ʮ�����������״̬
////cout << "hex:" << a << endl; //��ʮ��������ʽ���a