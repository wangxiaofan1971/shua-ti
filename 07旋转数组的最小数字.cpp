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
///*把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
//给你一个可能存在 重复 元素值的数组 numbers ，它原来是一个升序排列的数组，并按上述情形进行了一次旋转。
//请返回旋转数组的最小元素。例如，数组 [3,4,5,1,2] 为 [1,2,3,4,5] 的一次旋转，该数组的最小值为 1。*/  
////注意，数组[a[0], a[1], a[2], ..., a[n - 1]] 旋转一次 的结果为数组[a[n - 1], a[0], a[1], a[2], ..., a[n - 2]] 。
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