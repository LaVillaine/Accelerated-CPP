#include "stdafx.h"
#include "grade.h"
#include "median.h"

double grade(double midterm, double finalExam, const std::vector<double>& hw)
{
	// compute a student's overall grade from midterm and final exam grades
	// and vector of homework grades.
	// this function does not copy its argument because median does so for us
	return 0.2 * midterm + 0.4 * finalExam + 0.4 * median(hw);
}