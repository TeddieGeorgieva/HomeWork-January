// Problem4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 20;

int strLength(char* str)
{
	if (str[0] == '\0')
	{
		return 0;
	}
	return 1 + strLength(str + 1);
}

void swap(char* a, char* b)
{
	for (int i = 0; i < 5; ++i)
	{
		char temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

int main()
{
	
	char first[SIZE];
	char second[SIZE];
	cout << "First word: ";
	cin >> first;
	cout << "Second word: ";
	cin >> second;
	
	swap(first, second);
	cout << "Length: ";
	
	if (strLength(first) > strLength(second))
	{
		cout << strLength(first) << endl;
		cout << "After swap: " << first << endl;
	}
	else
	{
		cout << strLength(second) << endl;
		cout << "After swap: " << second << endl;
	}
	cout << endl;
	return 0;
}

