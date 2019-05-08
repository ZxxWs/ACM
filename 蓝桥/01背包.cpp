////动态规划——01背包问题
//#include <stdio.h>
//#include<iostream>
//using namespace std;
//
//int B[100][100] = { 0 };
//int N;			     //物品个数
//int W;			    //背包最大容量
//int w[100] = { 0 };
//int v[100] = { 0 };
//
//void input() {
//
//	printf("请输入背包最大容量");
//	cin >> W;
//	printf("请输入物品个数");
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		printf("输入第%d件物品的重量和价值", i);
//		cin >> w[i]>>v[i];
//	}
//}
//void knapsack()
//{
//	int k, c;
//	for (k = 1; k <= N; k++)
//		for (c = 1; c <= W; c++)
//			if (w[k] > c)
//			{
//				B[k][c] = B[k - 1][c];
//			}
//			else
//			{
//				int value1 = B[k - 1][c - w[k]] + v[k];
//				int value2 = B[k - 1][c];
//				if (value1 > value2)
//				{
//					B[k][c] = value1;
//				}
//				else
//					B[k][c] = value2;
//			}
//
//}
//int main()
//{
//	input();
//	knapsack();
//	cout << "背包内最大价值为：" << B[N][W];
//	return 0;
//}