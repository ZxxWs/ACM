#include<iostream>
using namespace std;


//分治法 循环赛问题



//减治法 可变规模问题，求数列n中第k小的数



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
