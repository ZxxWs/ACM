//#include<iostream>
//using namespace std;
//
//
////���η� ѭ��������
//
//
//
////���η� �ɱ��ģ���⣬������n�е�kС����
//int arr[1000];
//int kk(int x,int y) {
//	int j,m;
//	m = arr[x];
//	j = x;
//	while (x<=y)
//	{
//		while (m<arr[y])
//		{
//			y--; 
//			if (x > y)
//				break;
//		}
//		if(m>arr[y]) {
//			arr[j] = arr[y];
//			j = y;
//			y--;
//			}
//		while (m>arr[x])
//		{
//			x++;
//			if (x = y)break;
//		}
//		if (m < arr[x]) {
//			arr[j] = arr[x];
//			j = x;
//			x++;
//		}	
//	}
//	arr[j] = m;
//
//	return j;
//}
//int main() {
//	int n,  k;
//	cout << "�������ָ���" << endl;
//	cin >> n;
//	cout << "��������������" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cout<<"������ҵĵڼ�С��Ԫ��"<<endl;
//	cin >> k;
//	int lj = 0, rj = n - 1;
//	int j = kk(lj, rj);
//	cout << j << endl;
//	while(n>0)
//	{
//		cout << j << endl;
//		
//		if ((j+1) == k) {
//			cout << "��" << k  << "С������" << arr[j] << endl;
//			return 0;
//		}
//		if (j+1 > k) {
//			rj = j-1;
//			j = kk(lj,j);
//		}
//		if (j+1 < k) {
//			lj = j-1;
//			j = kk(j,rj);
//		}
//		n--;
//	}
//
//}
//
//
////
////#include <iostream>
////#include <iomanip>
////using namespace std;
////#define Max 100
////
////int Search(int a[], int n, int k);
////void Print(int a[], int n);
////
////int main()
////{
////	int a[] = { 98,33,21,102,45,5,32,11,65,82,193,321,34,72 };
////	int n, k, x;
////	n = sizeof(a) / sizeof(a[0]);
////	cout << "������Ҫ���ҵĵڼ�С��Ԫ��ֵ:" << endl;
////	cin >> k;
////	x = Search(a, n, k);
////	cout << "�����е�Ԫ��:" << endl;
////	Print(a, n);
////	cout << "��" << k << "С��Ԫ��ֵ��:";
////	cout << x << endl;
////	return 0;
////}
////
////int Search(int a[], int n, int k)//��������Ѱ�������е�kС��Ԫ�� 
////{
////	int low, high, i, j, t;
////	k--;
////	low = 0;
////	high = n - 1;
////	do
////	{
////		i = low;
////		j = high;
////		t = a[low];//��a[low]��Ϊ����Ԫ�� 
////		do
////		{
////			while (i < j&&t < a[j])//����ǰԪ�ش�������Ԫ��t����j�����ƶ��Ƚ���һԪ�� 
////			{
////				j--;
////			}
////			if (i < j)//����ǰԪ��С�ڻ����t,�򽫵�ǰԪ�ش���a[j]; 
////			{
////				a[i++] = a[j];
////			}
////			while (i < j&&t >= a[i])//����ǰԪ��С�ڻ��������Ԫ��t,��i�����ƶ��Ƚ���һԪ�� 
////			{
////				i++;
////			}
////			if (i < j)//����ǰԪ�ش�������Ԫ��,��Ԫ�ش���a[j]; 
////			{
////				a[j--] = a[i];
////			}
////		} while (i < j);
////		a[i] = t;//����Ԫ�ش���a[i]; 
////		if (i == k)//���ҵ���kСԪ�� ����ѭ�� 
////		{
////			break;
////		}
////		if (i < k)//˵�����ҵ�Ԫ�����Ұ벿�� 
////		{
////			low = i + 1;
////		}
////		else//˵�����ҵ�Ԫ������벿�� 
////		{
////			high = i - 1;
////		}
////	} while (i != k);
////	return a[k];//���ص�kСԪ�ص�ֵ 
////}
////
////void Print(int a[], int n)
////{
////	int i;
////	for (i = 0; i < n; i++)
////	{
////		cout << setw(4) << a[i];
////	}
////	cout << endl;
////}
//
//
//
