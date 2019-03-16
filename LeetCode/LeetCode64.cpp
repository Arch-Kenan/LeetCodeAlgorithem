//给定一个包含非负整数的 m x n 网格，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
//
//说明：每次只能向下或者向右移动一步。
//
//示例 :
//
//输入:
//[
//	[1, 3, 1],
//	[1, 5, 1],
//	[4, 2, 1]
//]
//输出 : 7
//	解释 : 因为路径 1→3→1→1→1 的总和最小。

#include "common.h"


class Solution {
public:
	int minPathSum(vector<vector<int>>& grid)
	{
		if (grid.empty())
			return 0;
		size_t  m = grid.size();
		size_t  n = grid[0].size();
		vector<vector<int>>    assistArray( m, vector<int>(n, 0));
		assistArray[0][0] = grid[0][0];
		for (size_t i = 1; i < n; i++)
		{
			assistArray[0][i] = assistArray[0][i - 1] + grid[0][i];
		}
		for (size_t j = 1; j < m; j++)
		{
			assistArray[j][0] = assistArray[j-1][0] + grid[j][0];
		}

		int up = 0;
		int left = 0;
		for (size_t row = 1; row < m ; row++)
		{
			for (size_t column = 1; column < n; column++)
			{
				int up = assistArray[row - 1][column];
				int left = assistArray[row][column - 1];
				if ( up < left)
				{
					assistArray[row][column] = up + grid[row][column];
				}
				else
				{
					assistArray[row][column] = left + grid[row][column];
				}
			}
		}
		return assistArray[m-1][n-1];
	};
};


//int main()
//{
//	vector<vector<int> > arrs = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
//
//	int result = Solution().minPathSum(arrs);
//	cout << result << endl;
//	return 0;
//}