// Problem8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

int strLength(char* str)
{
	if (str[0] == '\0')
	{
		return 0;
	}
	return 1 + strLength(str + 1);
}
const int SIZE = 100;

int main()
{
	char string[SIZE];
	cout << "Enter a string: ";
	cin >> string;
	cout << "String Length: " << strLength(string) << endl;
    return 0;
}

