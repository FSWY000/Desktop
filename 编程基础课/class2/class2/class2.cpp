// class2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;
double max(double x, double y);//函数声明

int _tmain(int argc, _TCHAR* argv[])//主函数
{
	double a, b, c;
	cout << "input two numbers:\n";
	cin >> a >> b;
	c = max(a, b);
	cout << "the squart of maxinum=" << sqrt(c) << endl;
}
double  max(double x, double y)//自定义函数的定义
{
	if (x > y)
		return x;
	else
		return y;
}


