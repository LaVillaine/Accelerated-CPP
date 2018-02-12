// Chapter2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// exercise 2-3, read the pad
	cout << endl<< "Please enter a number for the frame spacing: ";
	string padInput;
	cin >> padInput;
	unsigned long pad = 0;
	if (padInput.find_first_not_of("0123456789") == string::npos)
		pad = std::strtoul(padInput.c_str(), NULL, 0);
	if (!pad)
	{
		cout << "\nYou did not enter a valid number for the frame spacing. Goodbye." << endl;
		return 0;
	}

	// build the message that we intend to write
	const string greeting = "Hello, " + name + "!";

	// the number of rows and columns to write
	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 2;

	// write a blank line to separate the output from the input
	cout << endl;

	// write rows of output
	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;

		// invariant: we have written c characters so far in the current row
		while (c != cols)
		{
			// is it time to write the greeting?
			if (r == pad + 1 && c == pad + 1)
			{
				cout << greeting;
				c += greeting.size();
			}
			else
			{
				// are we on the border?
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}
    return 0;
}

