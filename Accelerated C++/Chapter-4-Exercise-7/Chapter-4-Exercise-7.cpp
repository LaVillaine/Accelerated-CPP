// Chapter-4-Exercise-7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<double> numbers;
	double currentEntry;
	double sum = 0;
	std::cout << "Enter several numbers to find out what the average is.\nPress Ctrl+Z when finished.\n";
	while (std::cin >> currentEntry)
	{
		numbers.push_back(currentEntry);
		sum += currentEntry;
	}
	double average = numbers.size() > 0 ? sum / numbers.size() : 0;
	std::cout << "The average is: " << average << "\n";
    return 0;
}

