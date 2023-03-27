#include<iostream>
#include<string>
#include<list>
#include<vector>
#include<stack>
#include<set>
#include<algorithm>
#include <functional>
#include <map>
#include <math.h>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

//Definition for a binary tree node.
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	bool IsSymmetric(TreeNode* v, TreeNode* u)
	{
		if (!v&&!u)
		{
			return true;
		}
		if (!v || !u)
		{
			return false;
		}
		return v->val == u->val && IsSymmetric(v->left, u->right) && IsSymmetric(u->left, v->right);
	}
	bool isSymmetric(TreeNode* root) {
		return IsSymmetric(root, root);
	}

};
void test()
{

}
int main() 
{

 test();
	

	system("pause");
	return 0;
}