//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//#include<algorithm>
//#include <functional>
//using namespace std;
////������̨������
////һֻ����һ�ο�������1��̨�ף�Ҳ��������2��̨�ס������������һ�� n ����̨���ܹ��ж�����������
//
////����Ҫȡģ 1e9 + 7��1000000007����������ʼ���Ϊ��1000000008���뷵�� 1��
////�ⷨ1������ʱ�����ƣ��ݹ�̫����
////class Solution {
////public:
////	Solution()
////	{
////		this->num = 0;
////	}
////	int numWays(int n)
////	{
////
////		coutn(n);
////
////		return num;
////	}
////	void coutn(int n)
////	{
////		if (n == 0)
////		{
////			int a = this->num + 1;
////			modulus<int> b;
////			a = b(a, 1000000007);
////			this->num = a;
////		}
////		else if (n<0)
////		{
////
////		}
////		else
////		{
////			coutn(n - 1);
////			coutn(n - 2);
////		}
////
////	}
////	int num;
////};
////�ⷨ����쳲��������з����ǵݹ�
////class Solution {
////public:
////	int numWays(int n) {
////		long f = 1;
////		long r = 1;
////		long add = 0;
////		modulus<long> m;
////		if (n == 0)
////		{
////			return 1;
////		}
////		else if (n == 1)
////		{
////			return 1;
////		}
////		else
////		{
////			for (size_t i = 1; i<n; i++)
////			{
////				add = f + r;
////				add = m(add, 1000000007);
////				f = r;
////				r = add;
////			}
////			return add;
////		}
////
////	}
////};
//void test()
//{
//	Solution a;
//	int b=a.numWays(3);
//	cout << b;
//}
//int main() {
//
//	test();
//
//	system("pause");
//	return 0;
//}