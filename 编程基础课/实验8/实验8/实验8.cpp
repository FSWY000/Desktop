// ʵ��8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>//Ҫ�õ���ʽ���Ʒ�
using namespace std;
void main()

{
	cout << setfill('*')
		<< setiosflags(ios::right)
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;
	cout << resetiosflags(ios::right)
		<< setiosflags(ios::left)
		<< setw(5) << 1
		<< setw(5) << 2
		<< setw(5) << 3 << endl;
}

