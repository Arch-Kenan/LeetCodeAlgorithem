////5. Longest Palindromic Substring
////Medium
////
////Share
////Given a string s, find the longest palindromic substring in s.You may assume that the maximum length of s is 1000.
//
//
//#include "common.h"
//
//void isPalindrome(const string& str, int low, int high, int& pStart, int& pEnd)
//{
//	int length = str.size();
//
//	int longest = pEnd - pStart + 1;
//
//	while (low >= 0 && high < length)
//	{
//		if (str[low--] != str[high++])
//		{
//			break;
//		}
//		else
//		{
//			if ((high - low - 1) > longest)
//			{
//				pStart = low + 1;
//				pEnd = high - 1;
//				longest = pEnd - pStart + 1;
//			}
//		}
//	}
//
//}
//
//class Solution {
//public:
//	string longestPalindrome(string s) {
//		const int N = s.size();
//		if (N == 0) return "";
//		string res = s.substr(0, 1);
//		vector<vector<bool>> dp(N, vector<bool>(N, false));
//		// s[j, i]
//		for (int i = 0; i < N; i++) 
//		{
//			dp[i][i] = true;
//			for (int j = 0; j < i; j++)
//			{
//				dp[j][i] = (s[j] == s[i]) && (i == j + 1 || dp[j + 1][i - 1]);
//				if (dp[j][i] && i - j + 1 >= res.size()) 
//				{
//					res = s.substr(j, i - j + 1);
//				}
//			}
//		}
//		return res;
//	}
//};
//
//
//
//
//int main()
//{
//	string kk("babad");
//
//	cout << Solution().longestPalindrome(kk).c_str();
//
//
//	return 0;
//}