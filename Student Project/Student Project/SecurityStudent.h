#pragma once
#include "Student.h"
#include <string>

class SecurityStudent : public Student
{
public:
	SecurityStudent();
	SecurityStudent(string ID,
		string firstName,
		string lastName,
		string email,
		int age,
		int numDaysComplete[],
		StudentMajor M_degreeType
	);
	void print();
	StudentMajor getDegreeType();
	~SecurityStudent();

};

