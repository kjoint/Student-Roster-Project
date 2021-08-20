#include "NetworkStudent.h"
#include <iostream>
using namespace std;

NetworkStudent::NetworkStudent():Student() {
	M_degreeType = NETWORK;
}

NetworkStudent::NetworkStudent(
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
	M_degreeType = NETWORK;
}

void NetworkStudent::print()
{
	this->Student::print();
	cout << "NETWORK" << endl;

}

StudentMajor NetworkStudent::getDegreeType()
{
	return NETWORK;
}

NetworkStudent::~NetworkStudent()
{
	Student::~Student();
	// Call destructor form Student Class
}


