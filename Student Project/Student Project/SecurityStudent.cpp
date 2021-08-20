#include "SecurityStudent.h"
#include <iostream>
using namespace std;

SecurityStudent::SecurityStudent() :Student() {
	M_degreeType = SECURITY;
}

SecurityStudent::SecurityStudent(
	string ID,
	string firstName,
	string lastName,
	string email,
	int age,
	int numDaysComplete[],
	StudentMajor Major
)
	: Student(ID, firstName, lastName, email, age, numDaysComplete)
{
	M_degreeType = SECURITY;
}

void SecurityStudent::print()
{
	this->Student::print();
	cout << "SECURITY" << endl;

}

StudentMajor SecurityStudent::getDegreeType()
{
	return SECURITY
		;
}

SecurityStudent::~SecurityStudent()
{
	Student::~Student();
	// Call destructor form Student Class
}
