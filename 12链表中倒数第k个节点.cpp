//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//#include<algorithm>
//#include <functional>
//#include <map>
//#include <math.h>
//using namespace std;
////Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//
// class Solution {
// public:
//	 ListNode* getKthFromEnd(ListNode* head, int k) {
//		 int sz = 0;
//		 ListNode* cur = head;
//		 while (cur != nullptr)
//		 {
//			 sz++;
//			 cur = cur->next;
//		 }
//		 //kΪ������k���ڵ�,������n-k+1���ڵ�
//		 cur = head;
//		 for (size_t i = 0; i<sz - k; i++)
//		 {
//			 cur = cur->next;
//		 }
//		 return cur;
//
//
//	 }
//void test()
//{
//	
//}
//int main() 
//{
//
// test();
//	
//
//	system("pause");
//	return 0;
//}