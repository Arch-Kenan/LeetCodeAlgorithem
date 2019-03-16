//����һ�������Ǹ������� m x n �������ҳ�һ�������Ͻǵ����½ǵ�·����ʹ��·���ϵ������ܺ�Ϊ��С��
//
//˵����ÿ��ֻ�����»��������ƶ�һ����
//
//ʾ�� :
//
//����:
//[
//	[1, 3, 1],
//	[1, 5, 1],
//	[4, 2, 1]
//]
//��� : 7
//	���� : ��Ϊ·�� 1��3��1��1��1 ���ܺ���С��

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