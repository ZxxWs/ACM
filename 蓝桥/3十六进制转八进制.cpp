///*������ĿҪ��ÿ��ʮ�����������Ȳ�����100000������˵����ͨ��int��
//long long�ǷŲ���ת�����ʮ�����������Բ�����ת����10���ƣ���ת��
//��8���ơ���ô������Ӧ�ò���������������Ȼ�����߲�ͨ���������ǿ���
//�����ַ��ͣ��������16�����������ַ�����ת�����2�����ַ�����ÿ��
//λ���������������һλ�µİ˽����ַ�*/
//#include<iostream>
//#include<cstring>
//#include<string.h>
//#include<stack>
//using namespace std;
//string trans(char a)  //ת����������һ��16����λת��λ4λ�������� 
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
//		int i = str.length() - 1;//�ַ����±� 
//		char sa;
//		int count1 = i - 2;//��¼ʣ���λ�� (i+1)-3 
//		while (count1 >= 0)
//		{
//			count1 -= 3;
//
//			sa = ((str[i] - '0') + (str[i - 1] - '0') * 2 + (str[i - 2] - '0') * 4) + '0';
//			s1.push(sa); //���õ��İ˽�����ѹ��ջ 
//			if (count1 < 0 && count1 != -3) //����λ������3λ 
//			{
//				count1 += 3;
//				i += 3;
//				break;
//			}
//			i -= 3;
//		}
//		if (count1 > 0 && count1 < 3) // �ж�ʣ�༸λ��1����2 
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
//		while (s1.top() == '0')//���ǰ����0���ȳ�ջ 
//		{
//			s1.pop();
//		}
//		while (!s1.empty())
//		{
//			cout << s1.top(); //�𲽵�������İ˽����������ս���������� 
//			s1.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}