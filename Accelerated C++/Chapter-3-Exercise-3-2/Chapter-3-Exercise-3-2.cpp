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

	// check that the user provided at least 4 values
	if (userInput.size() < 4)
	{
		std::cout << std::endl << "You must enter at least 4 values. Please try again later. " << std::endl;
		return 1;
	}
	bool collectionIsEven = userInput.size() % 2 == 0;

	// sort the numbers
	std::sort(userInput.begin(), userInput.end());

	// find the mid position
	size_t midPos = userInput.size() / 2;

	// find the position for the upper and lower quartiles
	size_t lowerQuartilePos = userInput.size() / 4;
	size_t upperQuartilePos = 3 * userInput.size() / 4;

	// compute upper and lower quartiles
	double lowerQuartile, upperQuartile = 0.0;
	if (midPos % 2 == 0)
	{
		lowerQuartile = (userInput[lowerQuartilePos] + userInput[lowerQuartilePos - 1]) / 2;
		upperQuartile = collectionIsEven ?
			(userInput[upperQuartilePos] + userInput[upperQuartilePos - 1]) / 2 :
			(userInput[upperQuartilePos] + userInput[upperQuartilePos + 1]) / 2 ;
	}
	else
	{
		lowerQuartile = userInput[lowerQuartilePos];
		upperQuartile = userInput[upperQuartilePos];
	}

	// display quartiles
	for (size_t i = 0; i != userInput.size(); ++i)
	{
		if (i == lowerQuartilePos || i == upperQuartilePos)
		{
			if (collectionIsEven)
				std::cout << std::endl;
			if (midPos % 2 == 0)
			{
				if (!collectionIsEven)
				{
					if (i == lowerQuartilePos)
						std::cout << "\n " << userInput[i];
					else
						std::cout << " "  << userInput[i] << "\n";
				}
				else
					std::cout << " " << userInput[i];
			}
			else if (!collectionIsEven)
				std::cout << std::endl;
		}
		else if (i == midPos)
		{
			std::cout << std::endl;
			if (collectionIsEven)
				std::cout << " " << userInput[i];
		}
		else
			std::cout << " " << userInput[i];
	}
	std::cout << std::endl;

	// output the results
	std::cout << "Lower quartile is: " << lowerQuartile << " Upper quartile is: " << upperQuartile << std::endl;

    return 0;
}

