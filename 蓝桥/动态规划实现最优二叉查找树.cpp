#include<iostream>

using namespace std;


//
//#include<stdio.h>
//#define N 7
//void Optimal_Bst(float *p, float *q, int n, float e[][N], int root[][N]);
//
//void main()
//{
//	float p[] = { 0,0.15,0.1,0.05,0.1,0.2 };//关键字出现的概率
//	float q[] = { 0.05,0.1,0.05,0.05,0.05,0.1 };//搜索不到关键字的几种情况的概率
//	int n = 6;//关键字个数
//	float e[N][N] = { 0 };//存储搜索的代价
//	int root[N][N] = { 0 };//子树的根，便于重构最优二叉树
//	Optimal_Bst(p, q, n, e, root);
//	for (int i = 1; i < 6; i++)
//		for (int j = 5; j >= i; j--)
//			printf("从第%d个元素到第%d个元素的最优二叉查找树的顶点为：%d\n", i, j, root[i][j]);
//}
//
//void Optimal_Bst(float *p, float *q, int n, float e[][N], int root[][N])
//{
//	float w[N][N] = { 0 };
//	float t = 0;
//	for (int i = 1; i <= n; i++)//左右子树为空的情况
//	{
//		e[i][i - 1] = q[i - 1];
//		w[i][i - 1] = q[i - 1];
//	}
//	for (int l = 1; l <= n; l++)
//		for (int i = 1; i <= n - l + 1; i++)
//		{
//			int j = 0;
//			j = i + l - 1;
//			e[i][j] = 10000;//初始化为很大的值，可以随意设置
//			w[i][j] = w[i][j - 1] + p[j] + q[j];//
//
//			for (int r = i; r <= j; r++)//r代表以下标r为根，r在所有的子树节点中遍历
//			{
//				t = e[i][r - 1] + e[r + 1][j] + w[i][j];
//				if (t < e[i][j])
//				{
//					e[i][j] = t;
//					root[i][j] = r;//得到最优二叉树时的根
//
//				}
//
//			}
//		}
//}










