//#include<iostream>
//using namespace std;
//typedef struct Point
//{
//	float x, y;
//	int flag;
//}Point;
//Point point[100];
//int n;
//
//void ConvexHull() {
//	for (int i = 0; i < n; ++i) {
//		for (int j = i + 1; j < n; ++j) {
//			float a = point[j].y - point[i].y;
//			float b = point[j].x - point[i].x;
//			float c = (point[i].x*point[j].y) - (point[i].y*point[j].x);
//
//			int sign1 = 0;
//			int sign2 = 0;
//
//			for (int k = 0; k < n; k++) {
//				if ((k == j) || (k == i))continue;
//				if ((a*point[k].x + b * point[k].y) == c) {
//					++sign1;
//					++sign2;
//				}
//				if ((a*point[k].x + b * point[k].y) > c) {
//					++sign1;
//				}
//				if ((a*point[k].x + b * point[k].y) < c) {
//					++sign2;
//				}
//			}
//			if (((sign1 == (n - 2)) || (sign2 == (n - 2)))){
//				point[i].flag = 1;
//				point[j].flag = 1;
//			}
//		}
//	}
//
//}
//
//int main() {
//
//	cout << "输入点的个数" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << "输入第" << i + 1 << "个点的x  y坐标：";
//		cin >> point[i].x >> point[i].y;
//	}
//	ConvexHull();
//	cout << "边界点分别为：" << endl;
//	for (int i = 0; i < n; i++) {
//		if (point[i].flag == 1)
//			cout << "x:" << point[i].x << "   y:" << point[i].y << endl;
//	}
//}
//
//
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

typedef struct p {
	int x, y, flag;
}Point;
Point point[100];
int n;

void con() {
	int a, b, c;
	int sign1, sign2;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			a = point[j].y - point[i].y;
			b = point[i].x - point[j].x;
			c = (point[i].x*point[j].y) - (point[i].y*point[j].x);
			sign1 = 0;
			sign2 = 0;
			for (int k = 0; k < n; k++) {
				if ((k == j) || (k == i))continue;
				if ((a*point[k].x + b * point[k].y) == c) {
					sign1++;
					sign2++;
				}
				if ((a*point[k].x + b * point[k].y) > c)
				{
					sign1++;
				}
				if ((a*point[k].x + b * point[k].y) < c)
				{
					sign2++;
				}

			}

			if ((sign1 == n-2) || (sign2 == n-2)) {
				point[i].flag = 1;
				point[j].flag = 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (point[i].flag == 1) {
			cout << point[i].x << "  " << point[i].y << endl;
		}
	}
}
int  main() {

	for (int i = 0; i < n; i++) {
		point[i].flag = 0;
		cin>>point[i].x;
		cin>>point[i].y;
	}
	cout << "坐标点:" << endl;

	cout << "极坐标点:" << endl;
	con();
	for (int i = 0; i < n; i++) {
		if(point[i].flag==1)
		cout << point[i].x << "  " << point[i].y << endl;
	}
	return 0;
}