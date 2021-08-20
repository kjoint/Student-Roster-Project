#pragma once
#include "Student.h"
#include<string>

class NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(string ID,
		string firstName,
		string lastName,
		string email,
		int age,
		int numDaysComplete[],
		StudentMajor M_degreeType
	);
	
	void print();
	StudentMajor getDegreeType();
	~NetworkStudent();

};

