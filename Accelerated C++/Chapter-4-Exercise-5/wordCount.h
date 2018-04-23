#pragma once

#include <string>

struct wordInfo
{
	std::string word;
	std::size_t occurrences;
};

std::size_t wordCount();