#include<iostream>

using namespace std;


//
//#include<stdio.h>
//#define N 7
//void Optimal_Bst(float *p, float *q, int n, float e[][N], int root[][N]);
//
//void main()
//{
//	float p[] = { 0,0.15,0.1,0.05,0.1,0.2 };//�ؼ��ֳ��ֵĸ���
//	float q[] = { 0.05,0.1,0.05,0.05,0.05,0.1 };//���������ؼ��ֵļ�������ĸ���
//	int n = 6;//�ؼ��ָ���
//	float e[N][N] = { 0 };//�洢�����Ĵ���
//	int root[N][N] = { 0 };//�����ĸ��������ع����Ŷ�����
//	Optimal_Bst(p, q, n, e, root);
//	for (int i = 1; i < 6; i++)
//		for (int j = 5; j >= i; j--)
//			printf("�ӵ�%d��Ԫ�ص���%d��Ԫ�ص����Ŷ���������Ķ���Ϊ��%d\n", i, j, root[i][j]);
//}
//
//void Optimal_Bst(float *p, float *q, int n, float e[][N], int root[][N])
//{
//	float w[N][N] = { 0 };
//	float t = 0;
//	for (int i = 1; i <= n; i++)//��������Ϊ�յ����
//	{
//		e[i][i - 1] = q[i - 1];
//		w[i][i - 1] = q[i - 1];
//	}
//	for (int l = 1; l <= n; l++)
//		for (int i = 1; i <= n - l + 1; i++)
//		{
//			int j = 0;
//			j = i + l - 1;
//			e[i][j] = 10000;//��ʼ��Ϊ�ܴ��ֵ��������������
//			w[i][j] = w[i][j - 1] + p[j] + q[j];//
//
//			for (int r = i; r <= j; r++)//r�������±�rΪ����r�����е������ڵ��б���
//			{
//				t = e[i][r - 1] + e[r + 1][j] + w[i][j];
//				if (t < e[i][j])
//				{
//					e[i][j] = t;
//					root[i][j] = r;//�õ����Ŷ�����ʱ�ĸ�
//
//				}
//
//			}
//		}
//}










