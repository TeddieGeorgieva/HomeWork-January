// Problem5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>


using namespace std;

const int SIZE = 20;
int main()
{
	cout << "How many letters do you enter? ";
	int letters = 0;
	cin >> letters;

	char str[SIZE];	
	for (int i = 0; i < letters; ++i)
	{
		cin >> str[i];
	}	
	cout << endl;

	for (int i = 0; i < letters; ++i)
	{
		if (str[i] == 'T')
		{
			cout << "Position: " << i + 1 << " " << endl;
		}
	}
    return 0;
}

