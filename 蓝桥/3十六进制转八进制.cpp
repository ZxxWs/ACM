///*由于题目要求每个十六进制数长度不超过100000，所以说，普通的int或
//long long是放不下转换后的十进制数，所以不能先转换成10进制，再转换
//成8进制。那么，我们应该采用其他方法，既然整型走不通，所以我们可以
//采用字符型，将输入的16进制数看成字符串，转换后的2进制字符串，每三
//位二进制数可以组成一位新的八进制字符*/
//#include<iostream>
//#include<cstring>
//#include<string.h>
//#include<stack>
//using namespace std;
//string trans(char a)  //转换函数，将一个16进制位转换位4位二进制数 
//{
//	switch (a)
//	{
//	case '0':
//		return "0000";
//	case '1':
//		return "0001";
//	case '2':
//		return "0010";
//	case '3':
//		return "0011";
//	case '4':
//		return "0100";
//	case '5':
//		return "0101";
//	case '6':
//		return "0110";
//	case '7':
//		return "0111";
//	case '8':
//		return "1000";
//	case '9':
//		return "1001";
//	case 'A':
//		return "1010";
//	case 'B':
//		return "1011";
//	case 'C':
//		return "1100";
//	case 'D':
//		return "1101";
//	case 'E':
//		return "1110";
//	case 'F':
//		return "1111";
//	}
//}
//
//int main()
//{
//	stack<char> s1;
//	int n;
//	cin >> n;
//	char a[100005];
//	while (n--)
//	{
//		string str, str1;
//		cin >> a;
//		int len = strlen(a);
//		for (int i = 0; i < len; ++i)
//		{
//			str += trans(a[i]);
//		}
//		int i = str.length() - 1;//字符的下标 
//		char sa;
//		int count1 = i - 2;//记录剩余的位数 (i+1)-3 
//		while (count1 >= 0)
//		{
//			count1 -= 3;
//
//			sa = ((str[i] - '0') + (str[i - 1] - '0') * 2 + (str[i - 2] - '0') * 4) + '0';
//			s1.push(sa); //将得到的八进制数压入栈 
//			if (count1 < 0 && count1 != -3) //若总位数不足3位 
//			{
//				count1 += 3;
//				i += 3;
//				break;
//			}
//			i -= 3;
//		}
//		if (count1 > 0 && count1 < 3) // 判断剩余几位，1或者2 
//		{
//			if (count1 == 1)
//			{
//				s1.push(str[0]);
//			}
//			else if (count1 == 2)
//			{
//				sa = ((str[1] - '0') + (str[0] - '0') * 2) + '0';
//				s1.push(sa);
//			}
//
//		}
//		while (s1.top() == '0')//如果前面有0，先出栈 
//		{
//			s1.pop();
//		}
//		while (!s1.empty())
//		{
//			cout << s1.top(); //逐步弹出里面的八进制数，最终结果就是所求 
//			s1.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}