#include "stdafx.h"
#include "Student_info.h"
#include <stdexcept>
#include "grade.h"

using std::istream; using std::vector;


istream& read(istream& is, Student_info& s)
{
	double midterm, finalExam;
	std::vector<double> homework;
	
	// read and store the student's name and midterm and final exam grades
	if (is >> s.name >> midterm >> finalExam)
	{   // read and store all the student's homework grades
		read_hw(is, homework);
		if (homework.size() == 0)
			throw std::domain_error("student has done no homework");
		s.final_grade = grade(midterm, finalExam, homework);
	}
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