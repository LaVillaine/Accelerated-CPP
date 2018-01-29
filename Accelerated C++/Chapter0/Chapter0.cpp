// Chapter0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	// exercise 0-0
	std::cout << "Hello, world!" << std::endl;

	// exercise 0-2
	std::cout << "This (\") is a quote, and this (\\) is a backslash." << std::endl;

	// exercise 0-4
	std::cout << "// a small C++ program" << std::endl;
	std::cout << "#include <iostream>" << std::endl << " " << std::endl;
	std::cout << "int main()" << std::endl << "{" << std::endl;
	std::cout << "\t" << "std::cout << \"Hello, world!\" << std::endl;" << std::endl;
	std::cout << "\t" << "return 0;" << std::endl << "}" << std::endl;
    return 0;
}

