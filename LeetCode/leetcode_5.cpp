//5. Longest Palindromic Substring
//Medium
//
//Share
//Given a string s, find the longest palindromic substring in s.You may assume that the maximum length of s is 1000.


#include "common.h"

bool isPalindrome(const string& str, size_t low, size_t high)
{
	while (low <= high)
	{
		if (str[low++] != str[high--])
		{
			return false;
		}
	}
	return true;
}

class Solution 
{
public:
	string longestPalindrome(string s)
	{
		if (s.empty())
		{
			return string();
		}
		size_t length = s.size();
		size_t pStart = 0;
		size_t pEnd = 0;
		for (size_t end = 0; end < length; end++)
		{
			for (size_t start = 0; start < end; start++)
			{
				if ( (end -start) > (pEnd - pStart) && isPalindrome(s, start, end))
				{
					pStart = start;
					pEnd = end;
				}
			}
		}
		return s.substr(pStart, pEnd - pStart +1);
	}
};



int main()
{
	string kkl("babad");
	cout << Solution().longestPalindrome(kkl).c_str();
	return 0;
}