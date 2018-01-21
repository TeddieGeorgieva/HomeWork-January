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
	char à;
	cout << "Enter a letter: ";
	cin >> à;
	cout << toUpper(à);
	cout << endl;	
    return 0;
}

