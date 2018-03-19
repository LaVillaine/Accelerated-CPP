// Chapter-3-Exercise-3-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <unordered_map>
#include <iostream>
#include <string>

int main()
{
	// ask for and read the user's input
	std::cout << "Enter a few sentences to be analysed, "
		"followed by Ctrl+Z to stop: ";
	std::unordered_map<std::string, unsigned> words;
	std::string x;

	// invariant: words contains all the words read so far with their corresponding occurrences
	// could do with stripping unwanted characters from the input
	while (std::cin >> x)
	{
		if (words.find(x) == words.end())
			words[x] = 1;
		else
			++words[x];
	}

	// display the number of times that each distinct word appears
	for (auto &kvp : words)
		std::cout << kvp.first << " appears " << kvp.second << " time(s). " << std::endl;
    return 0;
}

