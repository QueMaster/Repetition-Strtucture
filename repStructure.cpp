// Repetition_Stucture _1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for (int row = 5; row >= 1; row--)
	{
		for (int col = row; col >= 1; col--)
		{
			if (col % 2 != 0)
			{
				cout << "#";
			} else
			{
				cout << "*";
			}
		}

		cout << endl;
	}

	system("pause");
	return 0;
}