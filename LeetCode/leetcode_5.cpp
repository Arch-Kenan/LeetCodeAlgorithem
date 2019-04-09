//5. Longest Palindromic Substring
//Medium
//
//Share
//Given a string s, find the longest palindromic substring in s.You may assume that the maximum length of s is 1000.


#include "common.h"

void isPalindrome(const string& str, int low, int high, int& pStart, int& pEnd)
{
	int length = str.size();

	int longest = pEnd - pStart + 1;

	while (low >= 0 && high < length)
	{
		if (str[low--] != str[high++])
		{
			break;
		}
		else
		{
			if ((high - low - 1) > longest)
			{
				pStart = low + 1;
				pEnd = high - 1;
				longest = pEnd - pStart + 1;
			}
		}
	}

}


class Solution 
{
public:
	string longestPalindrome(string str )
	{
		if (str.empty())
		{
			return string();
		}
		size_t length = str.size();
		int pStart = 0;
		int pEnd = 0;
		
		int low = 0;
		int high = 0;
		for (size_t cur = 0; cur < length; cur++)
		{
			low = cur - 1;
			high = cur + 1;
			isPalindrome(str, low, high, pStart, pEnd);

			low = cur;
			high = cur + 1;
			isPalindrome(str, low, high, pStart, pEnd);

			low = cur - 1;
			high = cur;
			isPalindrome(str, low, high, pStart, pEnd);
		}

		return str.substr(pStart, pEnd - pStart + 1);
	}
};



int main()
{
	string kkl("babad");
	cout << Solution().longestPalindrome(kkl).c_str();
	return 0;
}