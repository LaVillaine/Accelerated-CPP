// Chapter-2-Exercise-2-8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	// loop to produce 9 factorial
	int product = 1;
	for (int i = 2; i < 10; ++i)
		product *= i;
	std::cout << "\n 9 factorial is: "<<product << std::endl;
    return 0;
}

