// Chapter-4-Exercise-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
	double maxVal = 100.0;
	std::streamsize maxWidth = static_cast<int>(log10(maxVal) * 3) + 6;

	for (double i = 1.0; i < maxVal; i++)
	{
		std::streamsize prec = std::cout.precision();
		std::cout << std::fixed << std::setprecision(3) << i << std::setw(maxWidth) << i*i << std::endl << std::setprecision(prec);
		std::setw(0);
	}
	return 0;
}
