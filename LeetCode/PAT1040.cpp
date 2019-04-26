//���ӣ�https://www.nowcoder.com/questionTerminal/5e7d025e91ab468f909cb93d431b89c3
//��Դ��ţ����
//
//�ַ���APPAPT�а������������ʡ�PAT�������е�һ��PAT�ǵ�2λ(P), ��4λ(A), ��6λ(T)���ڶ���PAT�ǵ�3λ(P), ��4λ(A), ��6λ(T)��
//
//�ָ����ַ�������һ�������γɶ��ٸ�PAT��
//
//�������� :
//����ֻ��һ�У�����һ���ַ��������Ȳ�����105��ֻ����P��A��T������ĸ��
//
//
//������� :
//��һ������������ַ����а������ٸ�PAT�����ڽ�����ܱȽϴ�ֻ�����1000000007ȡ�����Ľ����


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

