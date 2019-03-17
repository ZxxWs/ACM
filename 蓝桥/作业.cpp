#include<iostream>
using namespace std;


//分治法 循环赛问题



//减治法 可变规模问题，求数列n中第k小的数
int arr[1000];
int kk(int x,int y) {
	int j,m;
	m = arr[x];
	j = x;
	while (x<=y)
	{
		while (m<arr[y])
		{
			y--;
		}
		if(m>arr[y]) {
			arr[j] = arr[y];
			j = y;
			y--;
			}
		while (m>arr[x])
		{
			x++;
		}
		if (m < arr[x]) {
			arr[j] = arr[x];
			j = x;
			x++;
		}
		arr[j] = m;
		
	}
	
	return j;
}


int main() {
	int n,  k;
	cout << "输入数字个数" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout<<"输入查找的第几小的元素"<<endl;
	cin >> k;

	int lj = 0, rj = n - 1;
	int j = kk(lj, rj);
	cout << j << "j是这个" << endl;
	while(n)
	{

		if ((j+1) == k) {
			cout << "第" << k  << "小的数是" << arr[j] << endl;
			return 0;
		}
		if (j > k) {
			rj = j-1;
			j = kk(lj,j);
			
		}
		if (j < k) {
			lj = j-1;
			j = kk(j,rj);
			
		}

		n--;
	}

}


//typedef struct point {
//	int x = 0x3f3f3f3f;
//	int y = 0x3f3f3f3f;
//}point;
//
//int main(){//非书本方法
//	int n;
//	cin >> n;
//	cin >> n;
//	point a[100];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i].x >> a[i].y;
//	}
//	int mix = 0x3f3f3f3f;
//	int pointn= 0, pointm = 0;
//	int distance[100][100] = { 0 };
//	for (int i = 0; i < n-1; i++) {
//		for (int j = i + 1; j < n; j++)
//		{
//			distance[i][j] = ((a[i].x - a[j].x)*(a[i].x - a[j].x)) + ((a[i].y - a[j].y)*(a[i].y - a[j].y));
//			if (distance[i][j] < mix&&distance[i][j] != 0) {
//				
//				mix = distance[i][j];
//					pointn = i+1;
//				pointm = j + 1;
//			}
//		}
//	}
//	cout << pointn << '\0' << pointm << endl;
//	return 0;
//}
//
//
//
//
//
//
//
