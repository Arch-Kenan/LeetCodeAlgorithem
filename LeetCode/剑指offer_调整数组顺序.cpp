////��Ŀ����
////����һ���������飬ʵ��һ�����������������������ֵ�˳��
////ʹ�����е�����λ�������ǰ�벿�֣����е�ż��λ������ĺ�벿�֣�
////����֤������������ż����ż��֮������λ�ò��䡣
//
//#include "common.h"
////����˼·�ɣ���һ��˼·������ð���㷨��ǰż�������ͽ�����
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//
//
//		for (int i = 0; i < array.size(); i++)
//		{
//			for (int j = array.size() - 1; j > i; j--)
//			{
//				if (array[j] % 2 == 1 && array[j - 1] % 2 == 0) //ǰż���潻��
//				{
//					swap(array[j], array[j - 1]);
//				}
//			}
//		}
//	}
//};
//
////�ڶ���˼·���ٴ���һ������
//class Solution {
//public:
//	void reOrderArray(vector<int> &array) {
//
//		vector<int> array_temp;
//		vector<int>::iterator ib1, ie1;
//		ib1 = array.begin();
//
//
//		for (; ib1 != array.end();) {            //����ż�����ͱ��浽�����飬ͬʱ��ԭ������ɾ��
//			if (*ib1 % 2 == 0) {
//				array_temp.push_back(*ib1);
//				ib1 = array.erase(ib1);
//			}
//			else {
//				ib1++;
//			}
//
//		}
//		vector<int>::iterator ib2, ie2;
//		ib2 = array_temp.begin();
//		ie2 = array_temp.end();
//
//		for (; ib2 != ie2; ib2++)             //�������������ӵ�������
//		{
//			array.push_back(*ib2);
//		}
//	}
//};
//
//int main()
//{
//	return 0;
//}