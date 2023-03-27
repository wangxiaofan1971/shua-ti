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
//
////Definition for singly-linked list.
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//	ListNode* deleteNode(ListNode* head, int val) {
//		if (head->val == val)
//		{
//			return head->next;
//		}
//		ListNode* pre = head;
//		ListNode* cur = head->next;
//		while (cur->val != val)
//		{
//			pre = cur;
//			cur = cur->next;
//		}
//		pre->next = cur->next;
//		return head;
//	}
//};
//
//void test()
//{
//	Solution sol;
//}
//int main()
//{
//
//	test();
//
//
//	system("pause");
//	return 0;
//}