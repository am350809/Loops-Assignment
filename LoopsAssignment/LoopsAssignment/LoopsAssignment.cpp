// LoopsAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main()
{
	const float TAX_RATE = .3;
	double marchEastDiv = 0, marchMidDiv = 0, marchWestDiv = 0;
	double augustEastDiv = 0, augustMidDiv = 0, augustWestDiv = 0;
	string selectedMonth = "";
	char reset;

	do
	{
		cout << "Input a month that you would like to get the Net Sales For: ";
		cin >> selectedMonth;
		transform(selectedMonth.begin(), selectedMonth.end(), selectedMonth.begin(), toupper);

		if (selectedMonth == "MARCH")
		{
			cout << "(each asterisk equals $1000)\n" << endl;

			marchEastDiv = (15000 - 1500 - ((1500 - 1500) * TAX_RATE));
			marchMidDiv = (20000 - 1000 - ((20000 - 1000) * TAX_RATE));
			marchWestDiv = (18500 - 2000 - ((18500 - 2000) * TAX_RATE));

			cout << "East Division: $" << marchEastDiv;

			if (marchEastDiv < 1000)
			{
				cout << "  -  ";
			}
			else
			{
				for (int i = 1000; i < marchEastDiv; i += 1000)
				{
					cout << " * ";
				}
			}

			cout << endl;
			cout << "Midwest Division: $" << marchMidDiv;

			if (marchMidDiv < 1000)
			{
				cout << "  -  ";
			}
			else
			{
				for (int i = 1000; i < marchMidDiv; i += 1000)
				{
					cout << " * ";
				}
			}

			cout << endl;
			cout << "West Division: $" << marchWestDiv;

			if (marchWestDiv < 1000)
			{
				cout << "  -  ";
			}
			else
			{
				for (int i = 1000; i < marchWestDiv; i += 1000)
				{
					cout << " * ";
				}
			}
		} 
		else if (selectedMonth == "AUGUST")
		{
			cout << "(each asterisk equals $1000)\n" << endl;

			augustEastDiv = (25000 - 5500 - ((25000 - 5500) * TAX_RATE));
			augustMidDiv = (17000 - 1000 - ((17000 - 1000) * TAX_RATE));
			augustWestDiv = (14500 - 3000 - ((14500 - 3000) * TAX_RATE));

			cout << "East Division: $" << augustEastDiv;

			if (augustEastDiv < 1000)
			{
				cout << "  -  ";
			}
			else
			{
				for (int i = 1000; i < augustEastDiv; i += 1000)
				{
					cout << " * ";
				}
			}

			cout << endl;
			cout << "Midwest Division: $" << augustMidDiv;

			if (augustMidDiv < 1000)
			{
				cout << "  -  ";
			}
			else
			{
				for (int i = 1000; i < augustMidDiv; i += 1000)
				{
					cout << " * ";
				}
			}

			cout << endl;
			cout << "West Division: $" << augustWestDiv;

			if (augustWestDiv < 1000)
			{
				cout << "  -  ";
			}
			else
			{
				for (int i = 1000; i < augustWestDiv; i += 1000)
				{
					cout << " * ";
				}
			}
		}
		else if (selectedMonth == "JANUARY" || selectedMonth == "FEBRUARY" || selectedMonth == "APRIL" ||
			selectedMonth == "MAY" || selectedMonth == "JUNE" || selectedMonth == "JULY" || selectedMonth == "SEPTEMBER" ||
			selectedMonth == "OCTOBER" || selectedMonth == "NOVEMBER" || selectedMonth == "DECEMBER")
		{
			cout << "This month does not currently appear in out records.";
		}
		else
		{
			cout << "This is not a valid input";
		}

		cout << "\n\nWould you like to enter another month? (Type Y if Yes): ";
		cin >> reset;
	} while (reset == 'y' || reset == 'Y');



    return 0;
}

