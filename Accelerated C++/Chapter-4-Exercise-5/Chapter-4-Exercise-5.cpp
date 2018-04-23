// Chapter-4-Exercise-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "wordCount.h"
#include <iostream>

int main()
{
	std::vector<wordInfo> words;
	// ask for and read the user's input
	std::cout << "Enter a few sentences to be analysed, "
		"followed by Ctrl+Z to stop: ";
	std::size_t numberOfEntries = wordCount(words);
	std::cout << numberOfEntries << " entries were made\n";
	for (auto &item : words)
		std::cout << item.word << " appears " << item.occurrences << " time(s). \n";
    return 0;
}

