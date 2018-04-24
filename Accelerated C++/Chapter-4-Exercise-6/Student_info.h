#pragma once

#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
	std::string name;
	double final_grade;
};

std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);