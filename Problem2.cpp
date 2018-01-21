// Problem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include<cstring>

using namespace std;

const int SIZE = 10;

int digits(char* str)
{
	int i = 0;
	int digits = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			digits++;
		}
		i++;
	}
	return digits;
}

int capLetters(char* str)
{
	int i = 0;
	int capLetters = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			capLetters++;
		}
		i++;
	}
	return capLetters;
}
int smallLetters(char* str)
{
	int i = 0;
	int smallLetters = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			smallLetters++;
		}
		i++;
	}
	return smallLetters;
}
int main()
{
	int digit = 0;
	int capLetter = 0;
	int smallLetter = 0;
	int i = 0;

	char str[SIZE];
	cout << "Enter a string: ";
	cin >> str;

	digit = digits(str);
	capLetter = capLetters(str);
	smallLetter = smallLetters(str);

	cout << "The number of digits are: " << digit << endl;
	cout << "The number of capital letters are: " << capLetter << endl;
	cout << "The number of small letters are: " << smallLetter << endl;

	return 0;
}

