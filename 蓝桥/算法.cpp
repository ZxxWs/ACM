#include<iostream>
#include <algorithm>		//sort()�������Ŀ�
#include<math.h>
//#include<fstream>
//#include<iomanip>
#include<string>
#include<stack>
using namespace std;



////�ַ�������           90%
//int main() {
//	
//		string str;
//		cin >> str;
//		int len = str.length();
//		int a, b;
//
//		for (int i = 1; i < (len / 2)+1; i++) {
//			if (str[0] == str[i]) {
//				a = 0; b = i;
//				for (int j = b; j < len; ) {
//
//					if (str[a] != str[j])
//						break;
//					
//					if (j == len - 1) {
//						cout << b;
//						return 0;
//					}
//					else {
//						a++;
//						j++;
//					}
//				}
//			}
//		}
//		cout << len;
//		
//	return 0;
//}

////��������
//int main() {
//	char x[10];
//	cin >> x;
//	int a, b, c;
//	a = ((int)(x[0] - 48) * 10) + (int)(x[1] - 48);
//	b = ((int)(x[3] - 48) * 10) + (int)(x[4] - 48);
//	c = ((int)(x[5] - 48) * 10) + (int)(x[6] - 48);
//	if (a > b) {
//		int D = a;
//		a = b;
//		b = D;
//	}
//	if (b > c) {
//		int D = b;
//		b = c;
//		c = D;
//	}
//	if (a > b) {
//		int D = a;
//		a = b;
//		b = D;
//	}//���ݴ�С��������
//
//	if (c <= 12) {
//		cout << 20 << a << '-' << b << '-' << c;
//		cout << 20 << b<< '-' << a << '-' << c;
//		cout << 20 << a << '-' << b << '-' << c;
//	}
//
//	if ((a == b) && (b == c))
//	{
//		cout << 20 << a << '-' << b << '-' << c;
//		return 0;
//	}
//
//
//	return 0;
//}

//����ת��ö�٣�̰�ģ�
//int  mainn(){
//
//	
//	return 0;
//}

////����˾����̰�ģ�    δ��
//typedef struct things {
//	double g, p ;
//	double	value;
//}things;
//int main() {
//	double n, w, noww = 0;
//	double val = 0;
//	cin >> n >> w;				//������������
//	things thing[1000];
//	for (int  i = 0; i < n; i++) {
//		cin >> thing[i].g >> thing[i].p;
//		thing[i].value = (thing[i].p / thing[i].g); 
//		cout << thing[i].value<<endl;
//	}
//	while (true)
//	{
//		double vv = thing[0].value;
//		double gg = thing[0].g;
//		double pp = thing[0].p;
//		int  x=0;
//		for (int  i = 1; i< n; i++) {
//			if (vv < thing[i].value) {
//				vv = thing[i].value;
//				gg = thing[i].g;
//				pp = thing[i].p;
//				x = i;
//			}
//		}
//		thing[x].value = -1;
//		if ((noww + gg) <= w) {
//			val += pp;
//			noww += gg;
//			//cout << noww<<endl;
//			continue;
//		}
//		if((noww+gg)>w)
//		{
//			double qg = w - noww;
//			val += (qg*vv);
//			noww += gg;
//			//cout << qg<< endl;
//			//cout << noww << endl;
//		}
//		if (noww >= w)
//		{
//			cout <<fixed<< setprecision(1)<<val;//�����̶�С��
//			break;
//		}
//	}
//	return 0;
//}

//�ϲ�ʯ��								*** δ�� ***
int main() {
	int n, arr[1000] = { 0 }, brr[1000] = {0};//arrΪ�����ʯ��
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	long long num = 0;

	for (int i = 1; i < n; i++) {			//n-1�κϲ�

		long long flag = 0x3f3f3f3f;
		int tag;
		for (int j = 0; j < n-i; j++) {
			brr[j] = arr[j] + arr[j + 1];
			if (brr[j] < flag)
			{
				flag = brr[j];
				tag = j;
			}
		}

		num += flag;
		arr[tag] = flag;
		for (int k = tag+1; k<n-i; k++) {
			arr[k] = arr[k+1];
		}


	}
	cout << num;
	return 0;
}

//�����ֵDP
//int a[110];
//int b[110];
//int dp[110][210000];//��ǰi�����a��Ϊj�������b�ĺ�Ϊ����
//int n, p, q;
//int t = 100000;
//const int INF = 0x3f3f3f3f;
//int solve(int n)//n:�ж���������Ҫ����
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = -t; j <= t; j++)
//		{
//			dp[i][j + t] = -INF;			//��������ĳ�ʼ��
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		dp[i][a[i] + t] = b[i];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = -t; j <= t; j++)
//		{
//			dp[i][j + t] = max(dp[i - 1][j + t], dp[i][j + t]);
//			if (j + t - a[i] >= 0 && j + t - a[i] <= 200000)
//				dp[i][j + t] = max(dp[i][j + t], dp[i - 1][j + t - a[i]] + b[i]);
//		}
//	}
//	int ans = -INF;
//	for (int j = 0; j <= t; j++)
//	{
//		if (dp[n - 1][j + t] >= 0)
//			ans = max(ans, j + dp[n - 1][j + t]);
//		else
//			ans = max(ans, -INF);
//	}
//	return ans;
//}
//int mainnn()
//{
//	cin >> n;
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p >> q;
//		if (p < 0 && q < 0)			//�����Ϊ����������
//		{
//			continue;
//		}
//		a[cnt] = p;
//		b[cnt] = q;
//		cnt++;
//	}
//	int ans = solve(cnt);
//	if (ans <= -INF)
//	{
//		cout << "0" << endl;
//	}
//	else
//	{
//		cout << ans << endl;
//	}
//}

//��������
//#define W 21
//#define N 6
//int B[N][W] = { 0 };
//int w[N] = { 0 };
//int v[N] = { 0 };
//void knapsack() {
//	int k, c; 
//	for (k = 1; k < N; k++) {
//		for (c = 1; c < W; c++) {
//			if (w[k] > c) {
//				B[k][c] = B[k - 1][c];
//			}
//			else
//			{
//				B[k][c] = max(B[k - 1][c], B[k - 1][c - w[k]]+ v[k]);
//			}
//		}
//	}
//
//}
//int bag[200][5000] = { 0 };
//int v[200] = { 0 };
//int w[200] = { 0 };
//void tt(int N,int M) {
//	for (int i = 1; i <= N; i++) {
//		for(int j=1;j<=M;j++)
//			if (w[i - 1] < j) 
//				bag[i][j] = bag[i-1][j];
//			else
//				bag[i][j] = max(bag[i - 1][j], bag[i - 1][j - w[i - 1]] + v[i - 1]);
//			
//	}
//}
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) 
//		cin >> w[i] >> v[i];
//	tt(N,M);
//	cout << bag[N][M];
//	return 0;
//}

//ȡ����������
//#include <cstdio>
//#include <cstring>
//double dp[105][5055];//dp[i][j]��ʾȡi����ʱ��Ϊj�ĸ���   
//int n, a, b, x;
//
//int mainn() {
//	scanf("%d %d %d %d", &n, &a, &b, &x);
//	memset(dp, 0, sizeof(dp));
//	dp[0][0] = 1; //���ճ�ʶ��ȡ0�κ�Ϊ0�ĸ���Ϊ1
//	int sum = b - a + 1;
//	for (int i = 1; i <= n; i++) { //ȡi����  ��1~n
//		for (int j = 0; j <= x; j++) {//��Ϊj ��0~x
//			for (int k = a; k <= b; k++) {//ȡ��i������ʱ��ȡ����ֵ��k
//				if (j >= k) //�ܺ�j������ڵ��ڵ���ȡ�����Ĵ�С����Ȼ����������
//			//�ڵ�i��ȡ����jʱ����������ȡ���ķ�ʽ����K��a~bȡ��
//			//�����ȡ�����������ʼ���(�����������)�е�һ����
////������һ���ĸ��ʷ������׶Σ�1)dp[i-1][j-k]ȡ��i-1�κ�Ϊj-k�ĸ���
//							//2)��i��ȡk����һ�����������Ϊ1/sum�����׶���ˡ�
//					dp[i][j] += dp[i - 1][j - k] / sum;
//			}
//		}
//	}
//
//	for (int i = 0; i <= n; ++i) {
//		for (int j = 0; j <= x; ++j)
//			printf("%.4lf\t", dp[i][j]);
//		cout << endl;
//	}
//
//
//	printf("%.4lf\n", dp[n][x]);
//	return 0;
//}

//���
//int main() {
//	int a = 0;
//	for (int i = 1; i < 334; i++) 
//		a = i * 3 + a;
//	for (int i = 1; i < 200; i++)
//		a = i * 5 + a;
//	for (int i = 1; i < 67; i++)
//		a = a - (i * 15);
//	cout << a;
//	return 0;
//}

////�ַ�����
//int main() {
//
//	char a[50];
//	cin >> a;
//	int i = 0;
//	while (a[i])
//	{
//		if ('A' <= a[i] && a[i] < 'Z') {
//			a[i] = (char)(a[i] + 1);
//			i++;
//			continue;
//		}
//		if ('a' <= a[i] && a[i] < 'z')
//		{
//			a[i] = (char)(a[i] + 1);
//			i++;
//			continue;
//		}
//		if(a[i]=='Z')
//		{
//			a[i] = 'a';
//			i++;
//			continue;
//		}
//		if (a[i] == 'z') {
//			a[i] = 'A';
//			i++;
//			continue;
//		}
//		i++;
//	}
//	cout << a;
//
//	return 0;
//}

//��arccosֵ
//int main() {
//	double a;
//	cin >> a;
//	//a = fabs(a);
//	a = acos(a);
//	cout <<fixed<<setprecision(5) << a;
//	return 0;
//}

////��Ϲ�ʽ��ֵ
//long long  jj(long long j) {
//	long long m=1;
//	for (long long  i = 1; i <= j; i++) {
//		m = m * i;
//	}
//	return m;
//}
//long long cc(long long a, long long b) {
//	return jj(a) / (jj(b)*jj(a - b));
//}
//int main() {
//	long long n, m,sum=0;
//	cin >> n >> m;
//	for (long long i = 1; i <= n; i++) {
//		sum = sum + (cc(n, m)*cc(n, i)*i*i*i);
//	}
//	cout << sum % 987654321;
//	return 0;
//}

////�ϵ�����
//int main() {
//	int n, q,a[2000],b[4000];
//	cin >> n >> q;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for (int i = 0; i < q; i++)
//		cin >> b[i] >> b[q+i];
//	for (int i = 0; i < q; i++) {
//		int cnm;
//		int x = b[i], xx = b[q + i];
//		cnm = a[x];
//		for (int j = x; j <= xx; j++) {
//			if (cnm > a[j])
//				cnm = a[j];
//		}
//		cout << cnm<<endl;
//	}
//	return 0;
//}

