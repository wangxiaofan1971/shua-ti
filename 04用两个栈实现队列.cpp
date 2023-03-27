//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//using namespace std;
//用两个栈实现一个队列。
//队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，
//分别完成在队列尾部插入整数和在队列头部删除整数的功能。
//(若队列中没有元素，deleteHead 操作返回 -1 )

//示例 1：
//
//输入：
//["CQueue", "appendTail", "deleteHead", "deleteHead", "deleteHead"]
//[[], [3], [], [], []]
//输出：[null, null, 3, -1, -1]
//示例 2：
//
//输入：
//["CQueue", "deleteHead", "appendTail", "appendTail", "deleteHead", "deleteHead"]
//[[], [], [5], [2], [], []]
//输出：[null, -1, null, null, 5, 2]
//class CQueue {
//public:
//	CQueue() {
//		this->n = 0;
//	}
//
//	void appendTail(int value) {
//		if (!s2.empty())
//		{
//			for (size_t i = 0; i<n; ++i)
//			{
//				s1.push(s2.top());
//				s2.pop();
//			}
//		}
//
//		s1.push(value);
//		this->n++;
//	}
//
//	int deleteHead() {
//		int a = 0;
//		if (!s1.empty())
//		{
//
//			for (size_t i = 0; i < n; ++i)
//			{
//				s2.push(s1.top());
//				s1.pop();
//			}
//		}
//		if (s2.empty())
//		{
//			return -1;
//		}
//		else
//		{
//			this->n--;
//			a = s2.top();
//			s2.pop();
//			return a;
//		}
//
//
//	}
//	stack<int> s1;
//	stack<int> s2;
//	int n;
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