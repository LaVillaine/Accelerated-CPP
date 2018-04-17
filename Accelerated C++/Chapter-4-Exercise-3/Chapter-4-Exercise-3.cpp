// Chapter-4-Exercise-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
	int maxVal = 100;
	std::streamsize maxWidth = (log10(maxVal) * 3) + 3;

	for (int i = 1; i < maxVal; i++)
	{
		std::cout << i << std::setw(maxWidth) << i*i << std::endl;
		std::setw(0);
	}
	return 0;
}