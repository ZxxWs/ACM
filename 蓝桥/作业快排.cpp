//#include<iostream>
//using namespace std;
//
//void sort(int array[], int left, int right) {
//	int ltemp = left, rtemp = right;
//	int f = array[(left + right) / 2];
//	while (ltemp < rtemp)
//	{
//		while (array[ltemp] < f)
//		{
//			ltemp++;
//		}
//		while (array[rtemp] > f)
//		{
//			rtemp--;
//		}
//		if (ltemp < rtemp) {
//			int temp = array[ltemp];
//			array[ltemp] = array[rtemp];
//			array[rtemp] = temp;
//			ltemp++;
//			rtemp--;
//		}
//	}
//	if (ltemp == rtemp) {
//		ltemp++;
//	}
//	if (left < rtemp) {
//		sort(array, left, ltemp - 1);
//	}
//	if (ltemp < right) {
//		sort(array, rtemp + 1,right);
//	}
//}
//
//int main() {
//	int array[100],n;
//	cout << "输入数字个数:";
//	cin >> n;
//	for (int i = 0; i <n; i++) {
//		cin >> array[i];
//	}
//	
//
//	sort(array, 0, n-1);
//
//	
//	for (int i = 0; i < n; i++) {
//		cout << array[i] << " ";
//	}
//	cout << endl;
//
//
//}