//#include "common.h"
//
//void createNext(const char*   cha, int next[])
//{
//	int len = strlen(cha);
//	if (len == 0)
//	{
//		return;
//	}
//	next[0] = -1;
//	int pre = -1;
//	int post = 0;
//	while (post < len)
//	{
//		if (pre == -1 || cha[pre] == cha[post])
//		{
//			++post;
//			++pre;
//			next[post] = pre;
//		}
//		else
//		{
//			pre = next[pre];
//		}
//	}
//}
//
//
//int kmpAlgorithem(const char*  target, const char* pattern)
//{
//	int p = 0;
//	int q = 0;
//	int LenTar = strlen(target);
//	int lenPat = strlen(pattern);
//	int* next = new int[lenPat];
//	createNext(pattern, next);
//
//	while ( p < LenTar && q < lenPat )
//	{
//		if ( q == -1 || target[p] == pattern[q])
//		{
//			++p;
//			++q;
//		}
//		else
//		{
//			q = next[q];
//		}
//	}
//	if (q == strlen(pattern))
//		return  p - q;
//	else
//		return -1;
//}
//
//
//int main()
//{
//	const char*   cha = "BBCABCDABABCDABCDABDE";
//	const char*   fuck = "ABCDABD";
//	int result = kmpAlgorithem(cha, fuck);
//	cout << result << endl;
//	return 0;
//}