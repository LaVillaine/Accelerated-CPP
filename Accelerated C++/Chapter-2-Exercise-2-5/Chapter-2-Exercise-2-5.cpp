// Chapter-2-Exercise-2-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	// output a square
	std::cout << "This is a square" << std::endl << std::endl;
	int squareSide = 4;
	for (int r = 0; r < squareSide; ++r)
	{
		for (int c = 0; c < squareSide; ++c)
			std::cout << "* ";
		std::cout <<std::endl;
	}

	// output a rectangle
	std::cout << std::endl << "This is a rectangle" << std::endl << std::endl;
	int recLength = 4;
	int recWidth = 3;
	for (int rr = 0; rr < recWidth; ++rr)
	{
		for (int cc = 0; cc < recLength; ++cc)
			std::cout << "* ";
		std::cout << std::endl;
	}

	// output a triangle
	std::cout << std::endl << "This is a triangle" << std::endl << std::endl;
	int triRow = 4;
	int triCol = triRow * 2;
	for (int rrr = 0; rrr < triRow; ++rrr)
	{
		std::string::size_type ccc = 0; 
		std::string padding(rrr, ' ');
		while ( ccc!= triCol)
		{
			if (ccc < padding.size() || ccc > triCol - padding.size() - 1)
			{
				std::cout << " ";
				++ccc;
			}
			else
			{
				std::cout << "* ";
				ccc += 2;
			}
		}
		std::cout << std::endl;
	}
    return 0;
}

