// p2.3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x + y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned u = 10, u2 = 42;
	cout << u - u2 << endl;

	unsigned x;
	x = 024;
	cout << "x = " << x << endl;

	int cx, cy;
	cin >> cx >> cy;

	const int s = sum(cx, cy);
	//s = 10;

	constexpr int ss = sum(cx, cy);

	return 0;
}

