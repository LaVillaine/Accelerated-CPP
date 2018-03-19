// Chapter-3-Exercise-3-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	// ask for and read the user's input
	std::cout << "Enter a few sentences to be analysed, "
		"followed by Ctrl+Z to stop: ";
	std::vector<std::string> words;
	std::string x;

	// invariant: words contains all the words read so far
	while (std::cin >> x)
		words.push_back(x);

	// sort words in decreasing order of length
	std::sort(words.begin(), words.end(),
		[](const std::string &left, const std::string &right)
	{
		return left.length() > right.length();
	});

	// display the longest and shortest strings and their corresponding lengths
	std::cout << words[0] << " has " << words[0].length() << " character(s)." << std::endl;
	std::cout << words[words.size() - 1] << " has " << words[words.size()-1].length() << " character(s)." << std::endl;

	// there could be a tie when it comes to the longest and shortest words
	// this has not been catered for
    return 0;
}

