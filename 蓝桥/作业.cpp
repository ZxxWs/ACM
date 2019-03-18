//#include<iostream>
//using namespace std;
//
//
////分治法 循环赛问题
//
//
//
////减治法 可变规模问题，求数列n中第k小的数
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
//	cout << "输入数字个数" << endl;
//	cin >> n;
//	cout << "请依次输入数据" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cout<<"输入查找的第几小的元素"<<endl;
//	cin >> k;
//	int lj = 0, rj = n - 1;
//	int j = kk(lj, rj);
//	cout << j << endl;
//	while(n>0)
//	{
//		cout << j << endl;
//		
//		if ((j+1) == k) {
//			cout << "第" << k  << "小的数是" << arr[j] << endl;
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
////	cout << "请输入要查找的第几小的元素值:" << endl;
////	cin >> k;
////	x = Search(a, n, k);
////	cout << "数组中的元素:" << endl;
////	Print(a, n);
////	cout << "第" << k << "小的元素值是:";
////	cout << x << endl;
////	return 0;
////}
////
////int Search(int a[], int n, int k)//快速排序寻找数组中第k小的元素 
////{
////	int low, high, i, j, t;
////	k--;
////	low = 0;
////	high = n - 1;
////	do
////	{
////		i = low;
////		j = high;
////		t = a[low];//将a[low]作为枢轴元素 
////		do
////		{
////			while (i < j&&t < a[j])//若当前元素大于枢轴元素t，则将j向左移动比较下一元素 
////			{
////				j--;
////			}
////			if (i < j)//若当前元素小于或等于t,则将当前元素存入a[j]; 
////			{
////				a[i++] = a[j];
////			}
////			while (i < j&&t >= a[i])//若当前元素小于或等于枢轴元素t,则将i向右移动比较下一元素 
////			{
////				i++;
////			}
////			if (i < j)//若当前元素大于枢轴元素,则将元素存入a[j]; 
////			{
////				a[j--] = a[i];
////			}
////		} while (i < j);
////		a[i] = t;//枢轴元素存入a[i]; 
////		if (i == k)//若找到第k小元素 结束循环 
////		{
////			break;
////		}
////		if (i < k)//说明查找的元素在右半部分 
////		{
////			low = i + 1;
////		}
////		else//说明查找的元素在左半部分 
////		{
////			high = i - 1;
////		}
////	} while (i != k);
////	return a[k];//返回第k小元素的值 
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
