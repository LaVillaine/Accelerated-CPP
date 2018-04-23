#pragma once

#include <string>
#include <vector>

struct wordInfo
{
	std::string word;
	std::size_t occurrences;

	wordInfo() = default;
	wordInfo(const std::string &word_, const std::size_t &occurrences_) :
		word(word_), occurrences(occurrences_) {}
};

std::size_t wordCount(std::vector<wordInfo>&);