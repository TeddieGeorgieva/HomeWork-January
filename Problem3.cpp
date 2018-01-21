// Problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

void printLetters(char A)
{
	for (char A = 'A'; A <= 'Z'; ++A)
	{
		cout << "ASCII Value of " << A << " is " << int(A) << " ";
		cout << endl;
	}
}

int main()
{
	char A;
	printLetters('A');
	cout << endl;
    return 0;
}

