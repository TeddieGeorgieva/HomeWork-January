// Problem9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 100;


int main()
{
	char string[SIZE];
	cout << "Enter a string: ";
	cin >> string;
	int elements[256] = { 0 };
	cin.getline(string, 1024);

	for (int i = 0; string[i] != '\0'; i++)
	{
		elements[(int)string[i]]++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (elements[i])
		{
			cout << '\'' << (char)i << "\': " << elements[i] << " " << endl;
		}
	}
	cout << endl;
    return 0;
}

