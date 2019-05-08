////#include<iostream>
////
////using namespace std;
////
////void quicksort(int *r, int low, int high) {
////	int i, j;
////	if (low < high) {
////		i = low;
////		j = high;
////		r[0] = r[i];
////		do {
////			while (r[j] > r[0] && i < j)j--;
////			if (i < j)
////			{
////				r[i] = r[j];
////				i++;
////			}
////			while (r[i] < r[0] && i < j)i++;
////			if (i < j)
////			{
////				r[j] = r[i]; j--;
////			}
////		} while (i != j);
////			r[i] = r[0];
////			quicksort(r, low, i - 1);
////			quicksort(r, i + 1, high);
////		}
////}
////int main() {
////	int r[100],n;
////	cout << "输入数字个数:";
////	cin >> n;
////	for (int i = 0; i < n; i++) {
////		cin >> r[i];
////	}
////	quicksort(r, 0, n - 1);
////	for(int i=0;i<n;i++)
////		cout << r[i]<<"\0";
////
////	return 0;
////}
//
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
//		sort(array, rtemp + 1, right);
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