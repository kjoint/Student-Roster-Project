#include "SoftwareStudent.h"
#include <iostream>
using namespace std;

SoftwareStudent::SoftwareStudent() :Student() {
	M_degreeType = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(
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
	M_degreeType = SOFTWARE;
}

void SoftwareStudent::print()
{
	this->Student::print();
	cout << "SOFTWARE" << endl;

}

StudentMajor SoftwareStudent::getDegreeType()
{
	return SOFTWARE;
}

SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
	// Call destructor form Student Class
}
