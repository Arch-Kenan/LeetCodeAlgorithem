////��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20����
////���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe % 20Are % 20Happy��
//
//
//#include "common.h"
//
//
//class Solution {
//public:
//	void replaceSpace(char * str, int length)
//	{
//		if (str == nullptr || length <= 0)
//		{
//			return;
//		}
//		//calculation
//		int originLens = 0;
//		int sizeDLE = 0;
//		while ( str[originLens] != '\0')
//		{
//			if ( str[originLens++] == ' ')
//			{
//				++sizeDLE;
//			}
//		}
//		--originLens;
//		int newLength = originLens + sizeDLE * 2;
//		if (newLength >= length)
//		{
//			return;
//		}
//		str[newLength +1] = '\0';
//		while (originLens >= 0 && newLength > originLens)
//		{
//			if ( str[originLens] == ' ')
//			{
//				str[newLength--] = '0';
//				str[newLength--] = '2';
//				str[newLength--] = '%';
//				--originLens;
//			}
//			else
//			{
//				str[newLength--] = str[originLens--];
//			}
//		}
//	}
//};
//
//
//int main()
//{
//	char str[20] = " helloworld";
//
//	Solution().replaceSpace(str, 20);
//
//	cout << str << endl;
//	return 0;
//}