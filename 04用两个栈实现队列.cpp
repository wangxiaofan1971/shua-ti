//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//using namespace std;
//������ջʵ��һ�����С�
//���е��������£���ʵ�������������� appendTail �� deleteHead ��
//�ֱ�����ڶ���β�������������ڶ���ͷ��ɾ�������Ĺ��ܡ�
//(��������û��Ԫ�أ�deleteHead �������� -1 )

//ʾ�� 1��
//
//���룺
//["CQueue", "appendTail", "deleteHead", "deleteHead", "deleteHead"]
//[[], [3], [], [], []]
//�����[null, null, 3, -1, -1]
//ʾ�� 2��
//
//���룺
//["CQueue", "deleteHead", "appendTail", "appendTail", "deleteHead", "deleteHead"]
//[[], [], [5], [2], [], []]
//�����[null, -1, null, null, 5, 2]
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