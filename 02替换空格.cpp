//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//using namespace std;
//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
//
//示例 1：
//
//输入：s = "We are happy."
//输出："We%20are%20happy."
//class Solution {
//public:
//	string replaceSpace(string s) {
//		while (true)
//		{
//			int pos = s.find(" ");
//			if (pos == -1)
//			{
//				return s;
//			}
//			else
//			{
//				s.replace(pos--, 1, "%20");
//			}
//
//		}
//		return s;
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