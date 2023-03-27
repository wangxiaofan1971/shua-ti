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
//	ListNode* reverseList(ListNode* head) {
//		ListNode* cur = head;
//		vector<int> v_val;
//		int n = 0;
//		while (cur != nullptr)
//		{
//			v_val.push_back(cur->val);
//			cur = cur->next;
//			n++;
//		}
//		cur = head;
//		n--;
//		while (cur != nullptr)
//		{
//			cur->val = v_val[n];
//			cur = cur->next;
//			n--;
//		}
//		return head;
//
//
//	}
//};
//
//void test()
//{
//	//Solution sol;
//	stack<int*> a;
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