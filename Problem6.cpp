// Problem6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int binary(int num)
{
	int remainder = 0;
	if (num == 0)
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	remainder = num % 2;
	return remainder + binary(num / 2)* 10;
	
}


int main()
{
	int num = 0;
	cout << "Number = ";
	cin >> num;
	cout << "Binary number: " << binary(num);
	cout << endl;	

    return 0;
}

