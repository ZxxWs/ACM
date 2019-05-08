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
	cout << "输入物品的个数和背包容量";
	cin >> n >> w;				//个数。总质量

	for (int i = 0; i < n; i++) {
		cout << "输入第" << i + 1 << "个物品的质量和价值";
		cin >> thing[i].g >> thing[i].p;
		thing[i].value = (thing[i].p / thing[i].g);
		cout << "此物品的单位价值为：" << thing[i].value << endl;
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

	cout << "背包中总价值为：" << val;//保留固定小数
	return 0;
}