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
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//
//		ListNode* ans;
//		ListNode* L1 = l1;
//		ListNode* L2 = l2;
//		ListNode* start;
//		if (l1 == nullptr)
//		{
//			return l2;
//		}
//		if (l2 == nullptr)
//		{
//			return l1;
//		}
//		if (L1->val >= L2->val)
//		{
//			ans = L2;
//			L2 = (L2->next);
//		}
//		else
//		{
//			ans = L1, L1 = (L1->next);
//		}
//		start = ans;
//		while (L1 != nullptr && L2 != nullptr)
//		{
//			if (L1->val >= L2->val)
//			{
//				(ans->next) = L2;
//				L2 = (L2->next);
//			}
//			else
//			{
//				ans->next = L1;
//				L1 = (L1->next);
//			}
//			ans = ans->next;
//		}
//		if (L1 != nullptr)
//		{
//			ans->next = L1;
//		}
//		else
//		{
//			ans->next = L2;
//		}
//		return start;
//
//	}
//};
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