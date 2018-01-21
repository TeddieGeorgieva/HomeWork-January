// Problem7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double pow(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	return a* pow(a , (b - 1));	
}


int main()
{
	int a = 0;
	int b = 0;
	cout << "Enter a base: ";
	cin >> a;
	cout << "Enter an exponent: ";
	cin >> b;
	cout << "Result: " << pow(a, b) << endl;
    return 0;
}

