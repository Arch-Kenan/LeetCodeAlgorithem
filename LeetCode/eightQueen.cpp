#include "common.h"

//recursion
bool  canBeFilled(vector<int>& arrs, int row, int column)
{
	int index = 0;
	while (index < row)
	{
		if (arrs[index] == column || abs(arrs[index] - column) == abs(index - row))
		{
			return false;
		}
		++index;
	}
	return true;
}


void placeQueen(vector<int>&   QueenArray, int row, int gridNumber, int& count)
{
	//recursive exit condition 1
	if (row >= gridNumber)
	{
		++count;
		return;
	}
	int column = 0;
	//recursive exit condition 2
	while (column < gridNumber)
	{
		if (canBeFilled(QueenArray, row, column))
		{
			QueenArray[row] = column;
			placeQueen(QueenArray, row + 1, gridNumber, count);
		}
		++column;
	}
}


int queenFuction(int gridNumber)
{

	vector<int>   QueenArray(gridNumber, -1);
	int count = 0;
	placeQueen(QueenArray, 0, gridNumber, count);
	return count;
}


int main()
{
	int num = queenFuction(8);
	cout << num << endl;
	return 0;
}



