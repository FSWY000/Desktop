// ʵ��7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>//Ҫ�õ���ʽ���Ʒ�
using namespace std;

void main()
{
	int number = 1001;//1111101001.
	cout << "Decimal:" << dec << number << endl
		<< "Hexadecimal:" << hex << number << endl//3e9
		<< "Octal:" << oct << number << endl;
}

