// Chapter-4-Exercise-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student_info.h"
#include <algorithm>
#include <iomanip>

using std::vector;    using std::string;
using std::cout;      using std::cin;
using std::max;       using std::streamsize;
using std::setprecision;

int main()
{
	vector<Student_info> students;
	Student_info record;
	string::size_type maxlen = 0; // the length of the longest name

	cout << "Please enter records for each student as follows: name midterm_grade final_grade homework_grades Ctrl+Z \n";
	cout << "Then press Ctrl+Z again when all students' records have been entered \n";
	// read and store all the students' data
	// Invariant: students contains all the student records read so far
	//            maxlen contains the length of the longest name in students
	try
	{
		while (read(cin, record))
		{
			// find length of longest name
			maxlen = max(maxlen, record.name.size());
			students.push_back(record);
		}
	}
	catch (std::domain_error e)
	{
		cout << e.what();
	}

	// alphabetize the student records
	sort(students.begin(), students.end(), 
		[](const const Student_info& s1, const Student_info& s2)
	{
		return s1.name < s2.name;
	});

	// write the names and grades
	for (vector<Student_info>::size_type i = 0;
		i != students.size(); ++i)
	{
		// write the name, padded on the right to maxlen+1 characters
		cout << students[i].name
			<< string(maxlen + 1 - students[i].name.size(), ' ');

		// write the grade
		streamsize prec = cout.precision();
		cout << setprecision(3) << students[i].final_grade << setprecision(prec) << "\n";
	}

    return 0;
}

