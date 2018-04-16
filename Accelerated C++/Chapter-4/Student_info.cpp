#include "stdafx.h"
#include "Student_info.h"

using std::istream; using std::vector;

bool compare(const const Student_info& s1, const Student_info& s2)
{
	return s1.name < s2.name;
}

istream& read(istream& is, Student_info& s)
{
	// read and store the student's name and midterm and final exam grades
	is >> s.name >> s.midterm >> s.final;
	read_hw(is, s.homework);  // read and store all the student's homework grades
	return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
	// read homework grades from an input stream into a vector<double>
	if (in)
	{
		// get rid of previous contents
		hw.clear();

		// read homework grades
		double x;
		while (in >> x)
			hw.push_back(x);
		// clear the stream so that input will work for the next student
		in.clear();
	}
	return in;
}