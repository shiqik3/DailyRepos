#pragma once
#include<iostream>
#include<string>

using namespace std;

void checkKuoHao()
{
	//检测括号
	string b = "(()(())))))))))";
	char *a;
	int count = 0;
	//cin >> b;
	a = (char*)b.c_str();
	while (NULL != *a)
	{
		if (*a == '(')
		{
			count++;
		}
		else if (*a == ')')
		{
			count--;
		}
		else
		{
			break;
		}
		a++;
	}

	cout << ((count > 0) ? count : -count);

	cout << endl;
	return 0;
}


int add(int a)
{
	//各位相加
	//569;
	//5+56+569;
	int ret = a;
	if (a > 10)
	{
		ret += add(a / 10);
	}
	return ret;
}


void huochai()
{
	//火柴组成正方形
	//x为长
	//y为宽
	int a[4];
	int count = 0;
	int max = 999;
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	int x = (a[0] + a[1] + a[2] + a[3] + 4) / 4;
	int y = (a[0] + a[1] + a[2] + a[3] - 2) / 4;
	int w[6][4] = {
		{ x,x,y,y },
		{ x,y,x,y },
		{ y,x,y,x },
		{ y,y,x,x },
		{ x,y,y,x },
		{ y,x,x,y }
	};
	for (int j = 0; j<6; j++) {
		count = 0;
		for (int i = 0, tmp = 0; i < 4; i++)
		{
			tmp = a[i] - w[j][i];
			count += (tmp > 0) ? tmp : -tmp;
		}
		max = max < count ? max : count;
	}
	cout << max;
	cout << endl;
}
