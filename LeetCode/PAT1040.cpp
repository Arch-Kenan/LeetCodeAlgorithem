//链接：https://www.nowcoder.com/questionTerminal/5e7d025e91ab468f909cb93d431b89c3
//来源：牛客网
//
//字符串APPAPT中包含了两个单词“PAT”，其中第一个PAT是第2位(P), 第4位(A), 第6位(T)；第二个PAT是第3位(P), 第4位(A), 第6位(T)。
//
//现给定字符串，问一共可以形成多少个PAT？
//
//输入描述 :
//输入只有一行，包含一个字符串，长度不超过105，只包含P、A、T三种字母。
//
//
//输出描述 :
//在一行中输出给定字符串中包含多少个PAT。由于结果可能比较大，只输出对1000000007取余数的结果。


#include "common.h"


void getPA(string& tarStr, vector<int>&   paArrs)
{
	int length = tarStr.size();
	int count = 0;
	vector<int>    aArrs;
	for (int i = 0; i < length; i++)
	{
		if (tarStr[i] == 'P' )
		{
			++count;
		}
		aArrs.push_back(count);
	}

	for (int index = 1; index < length; index++)
	{
		if (tarStr[index] == 'A')
		{
			paArrs[index] = aArrs[index - 1] + paArrs[index - 1];
		}
		else
		{
			paArrs[index] = paArrs[index - 1];
		}
	}

}


int getCount(string& strs, vector<int>& paArrs)
{
	getPA(strs, paArrs);
	int length = strs.size();
	vector<int>     result( length, 0 );
	int index = 1;
	for (index ; index < length; index++)
	{
		if (strs[index] == 'T')
		{
			result[index] = ( paArrs[index - 1] + result[index - 1] ) % 1000000007;
		}
		else
		{
			result[index] = result[index - 1];
		}
	}
	return result[index - 1] % 1000000007;
}


int main()
{
	string str;
	cin >> str;
	int  length = str.size();
	vector<int>    paArrs(length, 0);

	cout<<getCount(str, paArrs);

	return 0;

}

