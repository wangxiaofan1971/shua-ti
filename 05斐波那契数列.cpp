//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//#include<algorithm>
//#include <functional>
//using namespace std;
//
////дһ������������ n ����쳲�������Fibonacci�����еĵ� n ��� F(N)����쳲��������еĶ������£�
////F(0) = 0, F(1) = 1
////F(N) = F(N - 1) + F(N - 2), ���� N > 1.
//
////쳲����������� 0 �� 1 ��ʼ��֮���쳲�������������֮ǰ��������Ӷ��ó���
////����Ҫȡģ 1e9 + 7��1000000007����������ʼ���Ϊ��1000000008���뷵�� 1��
//
////ʾ�� 1��
////
////���룺n = 2
////�����1
////ʾ�� 2��
////
////���룺n = 5
////�����5
//class Solution {
//public:
//	int fib(int n) {
//		int f0 = 0;
//		int f1 = 1;
//		int fn = 1;
//		if (n == 0)
//		{
//			return 0;
//		}
//		else if (n == 1)
//		{
//			return 1;
//		}
//		else
//		{
//			modulus<int> a;
//			for (size_t i = 1; i<n; ++i)
//			{
//				fn = f0 + f1;
//				fn = a(fn, 1000000007);
//				f0 = f1;
//				f1 = fn;
//			}
//			return fn;
//		}
//
//	}
//};
//void test()
//{
//
//}
//int main() {
//
//	test();
//
//	system("pause");
//	return 0;
//}
////��������Ҫ����ȡ��
