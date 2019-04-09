////给定一个字符串s，找到其中最长的回文子序列。可以假设s的最大长度为1000
//
//#include "common.h"
//#include <forward_list>
//
//
//
//class Solution {
//public:
//	int longestPalindromeSubseq(string s) 
//	{
//		const int length = s.size();
//		vector<vector<int>>  dp{ (const size_t)length, vector<int>(length, 0) };
//
//		//首行固定找末行
//		for (int postIndex = 0; postIndex < length; postIndex++)
//		{
//			for (int preIndex = postIndex; preIndex >= 0; preIndex--)
//			{
//				if (preIndex == postIndex) 
//				{
//					dp[preIndex][postIndex] = 1;
//				}
//				else if ( s[preIndex]  == s[postIndex])
//				{
//					dp[preIndex][postIndex] = 2 + dp[preIndex + 1][postIndex - 1];
//				}
//				else
//				{
//					dp[preIndex][postIndex] = std::max(dp[preIndex + 1][postIndex], dp[preIndex][postIndex - 1]);
//				}
//
//			}
//		}
//
//		return dp[0][length - 1];
//	}
//};
//
//
//int main() {
//	string line;
//	string s("bbbab");
//
//	int ret = Solution().longestPalindromeSubseq(s);
//	cout << ret;
//	return 0;
//}