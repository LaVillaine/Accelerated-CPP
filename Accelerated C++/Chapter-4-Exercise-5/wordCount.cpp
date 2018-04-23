#include "stdafx.h"
#include "wordCount.h"
#include <iostream>
#include <algorithm>

std::size_t wordCount(std::vector<wordInfo> &words)
{
	std::string x;
	std::size_t numberOfEntries = 0;
	// invariant: words contains all the words read so far with their 
	// corresponding occurrences
	while (std::cin >> x)
	{
		auto wordsIt = std::find_if(words.begin(), words.end(),
			[x](const wordInfo & item)
		{
			return item.word == x;
		});
		if (wordsIt == words.end())
			words.emplace_back(wordInfo(x, 1));
		else
			++wordsIt->occurrences;
		++numberOfEntries;
	}
	return numberOfEntries;
}