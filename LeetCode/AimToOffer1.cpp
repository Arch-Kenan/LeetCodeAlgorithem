////��ά�����еĲ���
////��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳�����������һ������������������һ����ά�����һ��������
////�ж��������Ƿ��и�������
//#include "common.h"
//
//
//
//
//        
//bool  findTar(vector<vector<int>> & arrs, int& sizeR, int& sizeC, int& target, int row, int column)
//{
//	if ( row >= sizeR || column >= sizeC )
//	{
//		return false;
//	}
//	else if (target == arrs[row][column])
//	{
//		return true;
//	}
//	else
//	{
//		//if (target < arrs[row][column])
//		//{
//		//	//up
//		//	res = findTar(arrs, sizeR, sizeC, target, row - 1, column);
//		//	if (!res)
//		//	{
//		//		//left
//		//		findTar(arrs, sizeR, sizeC, target, row, column - 1);
//		//	}
//		//}
//
//
//		if (target > arrs[row][column])
//		{
//			//right || buttom
//			if (findTar(arrs, sizeR, sizeC, target, row, column + 1) || findTar(arrs, sizeR, sizeC, target, row + 1, column))
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//		{
//			return false;
//		}
//
//
//		//right || buttom
//		if (findTar(arrs, sizeR, sizeC, target, row, column + 1) || findTar(arrs, sizeR, sizeC, target, row + 1, column))
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//}
//
//
//
//
//
//bool  findTar(vector<vector<int>> & arrs, int& sizeR, int& sizeC, int& target, int row, int column)
//{
//	if (row >= sizeR || column >= sizeC)
//		return false;
//	else if (target == arrs[row][column])
//		return true;
//	else
//	{
//		if (target > arrs[row][column])
//		{
//			//right || buttom
//			if (findTar(arrs, sizeR, sizeC, target, row, column + 1) || findTar(arrs, sizeR, sizeC, target, row + 1, column))
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//		else
//			return false;
//	}
//}
//
//
//class Solution {
//public:
//	bool Find(int target, vector<vector<int> >& grids)
//	{
//		if (grids.empty())
//		{
//			return false;
//		}
//		int sizeR = grids.size();
//		int sizeC = grids[0].size();
//		return findTar(grids, sizeR, sizeC, target, 0, 0);
//	}
//};
//
//
