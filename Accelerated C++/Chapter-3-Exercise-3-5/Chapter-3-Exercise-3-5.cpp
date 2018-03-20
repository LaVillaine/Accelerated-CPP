// Chapter-3-Exercise-3-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iomanip>

int main()
{
	std::unordered_map<std::string, std::vector<double>> studentGrades;
	bool addStudent = true;
	typedef std::vector<double>::size_type vec_sz;

	// ask for and read the students names
	std::cout << "Enter the students names followed by the word 'stop': ";
	std::string name;
	while (name != "stop")
	{
		std::cin >> name;
		if(name != "stop")
			studentGrades[name] = std::vector<double>();
	}

	for(auto &entry : studentGrades)
	{
		// ask for and read the homework grades
		std::cout << "\nEnter all homework grades for " << entry.first <<
			" followed by -1 to stop: ";
		double x = -2;

		// invariant: entry.second contains all the homework grades read so
		// far for the current student
		while (x != -1)
		{
			std::cin >> x;
			if (x >= 0)
				entry.second.push_back(x);
		}

		// check that at least 2 homework grades have been entered
		vec_sz size = entry.second.size();
		if (size < 2)
		{
			std::cout << "\nYou must enter at least 2 grades for this student. "
				"Please try again later. Bye.\n";
			return 1;
		}
	}

	

	// compute and write the final grade for each student
	for (auto &entry : studentGrades)
	{
		// sort the grades for each student
		std::sort(entry.second.begin(), entry.second.end());

		// compute the median homework grade
		vec_sz mid = entry.second.size() / 2;
		double median;
		median = entry.second.size() % 2 == 0 ?
			(entry.second[mid] + entry.second[mid - 1]) / 2
			: entry.second[mid];

		// write the grade
		std::streamsize prec = std::cout.precision();
		std::cout << "\nThe median grade for " << entry.first << " is "
			<< std::setprecision(3) << median << std::setprecision(prec) << std::endl;
	}
    return 0;
}

