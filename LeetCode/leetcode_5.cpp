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
	string longestPalindrome(const string& str )
	{
		int low = 0;
		int high = 0;
		size_t length = str.size();
		vector<vector<bool>>   arrs{ length, vector<bool>(length, false)};
		for (size_t i = 0; i < (int)length; i++)
		{
			arrs[i][i] = true;
			if ( (i +1) < (int)length && str[i] == str[i+1])
			{
				arrs[i][i + 1] = true;
				arrs[i + 1][i] = true;
			}
		}
		for ( int end = 1; end  < (int)length; end ++)
		{
			for (size_t start = 0; start < end; start++)
			{
				if (str[start] == str[end]  && arrs[start +1][end-1] == true )
				{
					arrs[start][end] = true;
					if ((end - start) > (high -low) )
					{
						high = end;
						low = start;
					}
				}
				else
				{
					arrs[start][end] = false;
				}
			}
		}
		return  str.substr(low, high - low + 1);
	}
};



int main()
{
	string kk("babad");

	cout << Solution().longestPalindrome(kk).c_str();


	return 0;
}