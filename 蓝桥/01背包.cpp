////��̬�滮����01��������
//#include <stdio.h>
//#include<iostream>
//using namespace std;
//
//int B[100][100] = { 0 };
//int N;			     //��Ʒ����
//int W;			    //�����������
//int w[100] = { 0 };
//int v[100] = { 0 };
//
//void input() {
//
//	printf("�����뱳���������");
//	cin >> W;
//	printf("��������Ʒ����");
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		printf("�����%d����Ʒ�������ͼ�ֵ", i);
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
//	cout << "����������ֵΪ��" << B[N][W];
//	return 0;
//}