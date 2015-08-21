// 10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void elimDumps(vector<string> &words)
{
	// 按字典序排序
	sort(words.begin(), words.end());

	// unique重排输入范围，使得每个单词只出现一次
	// 并排列在范围的前部，返回指向不重复区域之后一个位置的迭代器
	auto end_unique = unique(words.begin(), words.end());

	// 删除重复单词
	words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int _tmain(int argc, _TCHAR* argv[])
{
	// 创建并初始化字符串向量
	vector<string> words{ "aaa", "c", "eeee", "b", "cccc", "c" };

	// 移除重复单词并按字典序排序
	elimDumps(words);

	// 将向量按字符串大小排序，使用稳定排序算法保持相同长度的单词按字典序排列
	stable_sort(words.begin(), words.end(), isShorter);

	for (auto &s : words)
	{
		cout << s << endl;
	}

	return 0;
}

