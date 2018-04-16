#include "stdafx.h"
#include <stdexcept>
#include "grade.h"
#include "median.h"

using std::domain_error; using std::vector;

double grade(double midterm, double final, double homework)
{
	// compute a student's overall grade from midterm and final exam grades and 
	// homework grade
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const std::vector<double>& hw)
{
	// compute a student's overall grade from midterm and final exam grades
	// and vector of homework grades.
	// this function does not copy its argument because median does so for us
	if (hw.size() == 0)
		throw domain_error("student has done no homework");
	return grade(midterm, final, median(hw));
}

double grade(const Student_info& s)
{
	return grade(s.midterm, s.final, s.homework);
}