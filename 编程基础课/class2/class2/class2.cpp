// class2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;
double max(double x, double y);//��������

int _tmain(int argc, _TCHAR* argv[])//������
{
	double a, b, c;
	cout << "input two numbers:\n";
	cin >> a >> b;
	c = max(a, b);
	cout << "the squart of maxinum=" << sqrt(c) << endl;
}
double  max(double x, double y)//�Զ��庯���Ķ���
{
	if (x > y)
		return x;
	else
		return y;
}


