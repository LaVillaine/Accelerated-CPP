// Chapter-3-Exercise-3-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	// ask the user to provide a minimum of 2 integers
	std::cout << "Provide a list of integers, followed by Ctrl+Z to stop: ";
	std::vector<double> userInput;
	double x;

	// invariant: userInput contains all integers provided by the user so far
	while (std::cin >> x)
		userInput.push_back(x);

	// check that the user provided at least 2 values
	if (userInput.size() < 2)
	{
		std::cout << std::endl << "You must enter at least 2 values. Please try again later. " << std::endl;
		return 1;
	}

	// sort the numbers
	std::sort(userInput.begin(), userInput.end());

	// find mid position for entire collection and upper and lower sub collections
	size_t midPos = userInput.size() / 2;
	size_t lowerQuartileEndIndex = midPos - 1;
	size_t lowerMidPos = lowerQuartileEndIndex / 2;
	size_t upperQuartileStartIndex = userInput.size() % 2 == 0 ?
		midPos :
		midPos + 1;
	size_t upperMidPos = userInput.size() - ((userInput.size() - upperQuartileStartIndex) / 2);

	// compute upper and lower quartiles
	double lowerQuartile = lowerQuartileEndIndex % 2 == 0 ?
		userInput[lowerMidPos] :
		(userInput[lowerMidPos] + userInput[lowerMidPos + 1]) / 2;
	double upperQuartile = (userInput.size() - upperQuartileStartIndex) % 2 == 0 ?
		(userInput[upperMidPos] + userInput[upperMidPos - 1]) / 2 :
		userInput[upperMidPos - 1];

	// output the results
	std::cout << "Lower quartile is: " << lowerQuartile << " Upper quartile is: " << upperQuartile << std::endl;

    return 0;
}

