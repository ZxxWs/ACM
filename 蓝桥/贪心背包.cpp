#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;


typedef struct things {
	double g, p;
	double	value;
}things;
things thing[100];
int main() {
	double n, w, noww = 0;
	double val = 0;
	cout << "������Ʒ�ĸ����ͱ�������";
	cin >> n >> w;				//������������

	for (int i = 0; i < n; i++) {
		cout << "�����" << i + 1 << "����Ʒ�������ͼ�ֵ";
		cin >> thing[i].g >> thing[i].p;
		thing[i].value = (thing[i].p / thing[i].g);
		cout << "����Ʒ�ĵ�λ��ֵΪ��" << thing[i].value << endl;
	}
	int q = n;
	while ((noww < w) && (q != 0))
	{

		q--;
		double vv = thing[0].value;
		double gg = thing[0].g;
		double pp = thing[0].p;
		int  x = 0;
		for (int i = 1; i < n; i++) {
			if (vv < thing[i].value) {
				vv = thing[i].value;
				gg = thing[i].g;
				pp = thing[i].p;
				x = i;
			}
		}
		thing[x].value = -1;
		if ((noww + gg) <= w) {
			val += pp;
			noww += gg;
			continue;
		}
		if ((noww + gg) > w)
		{
			double qg = w - noww;
			val += (qg * vv);
			noww += gg;
		}

	}

	cout << "�������ܼ�ֵΪ��" << val;//�����̶�С��
	return 0;
}