#pragma once
#include "Student.h"
#include <string>

class SoftwareStudent : public Student
{
public:
	SoftwareStudent();
	SoftwareStudent(string ID,
		string firstName,
		string lastName,
		string email,
		int age,
		int numDaysComplete[],
		StudentMajor M_degreeType
	);
	void print();
	StudentMajor getDegreeType();
	~SoftwareStudent();

};

