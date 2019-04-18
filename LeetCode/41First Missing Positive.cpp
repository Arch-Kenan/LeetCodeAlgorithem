//Given an unsorted integer array, find the smallest missing positive integer.
//
//Example 1:
//
//Input: [1, 2, 0]
//	Output : 3
//	Example 2 :
//
//	Input : [3, 4, -1, 1]
//	Output : 2
//	Example 3 :
//
//	Input : [7, 8, 9, 11, 12]
//	Output : 1


#include "common.h"

class Solution {
public:
	int firstMissingPositive(vector<int>& nums)
	{
		int length = nums.size();
		for (int pos = 0; pos < length; pos++)
		{
			while ( nums[pos] < length && nums[pos] > 0 && nums[pos] != nums[nums[pos] - 1] )
			{
				swap(nums[pos], nums[nums[pos] - 1]);
			}
		}
		for (int index = 0; index < length; index++)
		{
			if (index + 1 != nums[index] )
			{
				return index + 1;
			}
		}
		return length +1 ;
	}
};

int main()
{
	vector<int>      arrs = { 1,2,0};

	int res = Solution().firstMissingPositive(arrs);

	cout << res << endl;
	return 0;
}