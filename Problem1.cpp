// Problem1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
 
using namespace std;

char toUpper(char a)
{
	a = a + 'A' - 'a';
	return a;
}


int main()
{
	char �;
	cout << "Enter a letter: ";
	cin >> �;
	cout << toUpper(�);
	cout << endl;	
    return 0;
}

