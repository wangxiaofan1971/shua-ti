//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//using namespace std;
///*�ҳ��������ظ������֡�
//��һ������Ϊ n ������ nums ����������ֶ��� 0��n-1 �ķ�Χ�ڡ�
//������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�
//���ҳ�����������һ���ظ������֡�*/
//
///*ʾ�� 1��
//���룺
//[2, 3, 1, 0, 2, 5, 3]
//�����2 �� 3 */
//
//class Solution {
//public:
//	int findRepeatNumber(vector<int>& nums) {
//		int n = nums.size();
//		multiset<int> m;
//		for (size_t i = 0; i<n; i++)
//		{
//			m.insert(nums[i]);
//		}
//		for (multiset<int>::iterator it = m.begin(); it != m.end(); ++it)
//		{
//			if (*it == (*++it))
//			{
//				return *it;
//			}
//			it--;
//		}
//		return 0;
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