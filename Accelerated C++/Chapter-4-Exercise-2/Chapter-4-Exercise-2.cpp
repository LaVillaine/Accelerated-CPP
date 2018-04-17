// Chapter-4-Exercise-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		std::cout << i << std::setw(10) << i*i << std::endl;
		std::setw(0);
	}
    return 0;
}

