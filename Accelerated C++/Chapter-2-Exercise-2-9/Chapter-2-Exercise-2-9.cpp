// Chapter-2-Exercise-2-9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string firstNumStr;
	std::string secondNumStr;

	std::cout << "Enter the first integer: ";
	std::cin >> firstNumStr;
	if (firstNumStr.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "\nYou did not enter a valid integer. Goodbye." << std::endl;
		return 0;
	}

	std::cout << "Enter the second integer: ";
	std::cin >> secondNumStr;
	if (secondNumStr.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "\nYou did not enter a valid integer. Goodbye." << std::endl;
		return 0;
	}

	int firstNum = std::atoi(firstNumStr.c_str());
	int secondNum = std::stoi(secondNumStr.c_str());
	if (firstNum == secondNum)
		std::cout << firstNumStr << " is equal to " << secondNumStr << std::endl;
	else if(firstNum > secondNum)
		std::cout << firstNumStr << " is greater than " << secondNumStr << std::endl;
	else
		std::cout << secondNumStr << " is greater than " << firstNumStr << std::endl;
    return 0;
}

