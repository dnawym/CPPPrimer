// 10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void elimDumps(vector<string> &words)
{
	// ���ֵ�������
	sort(words.begin(), words.end());

	// unique�������뷶Χ��ʹ��ÿ������ֻ����һ��
	// �������ڷ�Χ��ǰ��������ָ���ظ�����֮��һ��λ�õĵ�����
	auto end_unique = unique(words.begin(), words.end());

	// ɾ���ظ�����
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int _tmain(int argc, _TCHAR* argv[])
{
	// ��������ʼ���ַ�������
	vector<string> words{ "aaa", "c", "eeee", "b", "cccc", "c" };

	// �Ƴ��ظ����ʲ����ֵ�������
	elimDumps(words);

	// ���������ַ�����С����ʹ���ȶ������㷨������ͬ���ȵĵ��ʰ��ֵ�������
	stable_sort(words.begin(), words.end(), isShorter);

	for (auto &s : words)
	{
		cout << s << endl;
	}

	return 0;
}

