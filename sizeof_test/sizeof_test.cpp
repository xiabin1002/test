// sizeof_test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define  WFS_3Q8	(0X00000001<<1)
#define  WFS_PT115	(0X00000001<<2)

#define PR(X)	std::cout<<#X<<"=="<<X<<"\n"<<endl;
#define CON_STR(X) std::cout<<"wfs_"<<#X<<"=="<<WFS_##X<<endl;

int (*func)(int,int);

int abs(int a, int b)
{
	return a+b;  
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1;
	int* p = new int(0);
	*p = 4;
	int a = sizeof(p);
	func = abs;

	PR(func(*p, x));
	PR(x);
	CON_STR(3Q8);
	CON_STR(PT115);

	return 0;
}

