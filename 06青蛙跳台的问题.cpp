//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//#include<algorithm>
//#include <functional>
//using namespace std;
////青蛙跳台阶问题
////一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。
//
////答案需要取模 1e9 + 7（1000000007），如计算初始结果为：1000000008，请返回 1。
////解法1：超出时间限制，递归太慢了
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
////解法二：斐波那契数列方法非递归
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