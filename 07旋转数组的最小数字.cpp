//#include<iostream>
//#include<string>
//#include<list>
//#include<vector>
//#include<stack>
//#include<set>
//#include<algorithm>
//#include <functional>
//#include <map>
//using namespace std;
///*��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
//����һ�����ܴ��� �ظ� Ԫ��ֵ������ numbers ����ԭ����һ���������е����飬�����������ν�����һ����ת��
//�뷵����ת�������СԪ�ء����磬���� [3,4,5,1,2] Ϊ [1,2,3,4,5] ��һ����ת�����������СֵΪ 1��*/  
////ע�⣬����[a[0], a[1], a[2], ..., a[n - 1]] ��תһ�� �Ľ��Ϊ����[a[n - 1], a[0], a[1], a[2], ..., a[n - 2]] ��
//class Solution {
//public:
//	int minArray(vector<int>& numbers) {
//		int n = numbers.size();
//		for (size_t i = 0; i<n - 1; i++)
//		{
//			if (numbers[i]>numbers[i + 1])
//			{
//				return numbers[i + 1];
//			}
//		}
//		return numbers[0];
//	}
//};
//void test()
//{
//	int c = 0;
//	Solution sol;
//	vector<int> a;
//	a.push_back(2);
//	a.push_back(2);
//	a.push_back(2);
//	a.push_back(0);
//	a.push_back(1);
//	c=sol.minArray(a);
//	cout << c;
//}
//int main() {
//
//	test();
//	system("pause");
//	return 0;
//}