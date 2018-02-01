// Chapter1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	// exercise 1-0
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name << "!" << std::endl;

	// framing a name
	std::cout << "Please enter your first name: ";
	std::string firstName;
	std::cin >> firstName;
	const std::string greeting = "Hello, " + firstName + "!";
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	const std::string first(second.size(), '*');
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	
	// exercise 1-5
	{
		std::string s = "a string";
		{
			std::string x = s + ", really";
			std::cout << s << std::endl;
			std::cout << x << std::endl;
		}
	}

    return 0;
}

