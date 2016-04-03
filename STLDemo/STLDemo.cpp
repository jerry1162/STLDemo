// STLDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string.h>
#include <map>
using namespace std;
int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(5);
	a.push_back(3);

	for (vector<int>::iterator it = a.begin(); it != a.end();it++)
	{
		cout << (int)*it << endl;
	}

	//map<int, string> b;
	system("pause");
    return 0;
}

