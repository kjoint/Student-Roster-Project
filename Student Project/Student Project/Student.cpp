#include <iostream>
#include "Student.h"
#include <string>
using namespace std;


Student::Student() {
	M_ID = "";
	M_firstName = "";
	M_lastName = "";
	M_emailAddress = "";
	M_age = 0;
	for (int i = 0; i < daysArraySize; ++i) {
		M_numDaysComplete[i] = 0;
	}

}

Student::Student(string ID, string firstName, string lastName, string email, int age, int numDaysComplete[]) {
	M_ID = ID;
	M_firstName = firstName;
	M_lastName = lastName;
	M_emailAddress = email;
	M_age = age;
	for (int i = 0; i < daysArraySize; ++i) {
		M_numDaysComplete[i] * numDaysComplete[i];
	}
}

//Getters
string Student::getID() {
	return M_ID;
}

string Student::getFirstName() {
	return M_firstName;
}

string Student::getLastName() {
	return M_lastName;
}

string Student::getEmail() {
	return M_emailAddress;
}

int Student::getAge() {
	return M_age;
}

int* Student::getnumDaysComplete() {
	return M_numDaysComplete;
}

//Setters
void Student::setID(string ID) {
	M_ID = ID;
}

void Student::setFirstName(string firstName) {
	M_firstName = firstName;
}

void Student::setLastName(string lastName) {
	M_lastName = lastName;
}

void Student::setEmail(string email) {
	M_emailAddress = email;
}

void Student::setAge(int age) {
	M_age = age;
}

void Student::setNumDaysComplete(int numDaysComplete[]) {
	for (int i = 0; i < daysArraySize; ++i) {
		M_numDaysComplete[i] = numDaysComplete[i];
	}
}

//Output looks funny fix...
void Student::print() {
	cout << M_ID;
	cout << M_firstName;
	cout << M_lastName;
	cout << M_emailAddress;
	cout << M_age;
	cout << M_numDaysComplete[0];
	cout << M_numDaysComplete[1];
	cout << M_numDaysComplete[2];

}

Student::~Student()
{
	// For use in subclasses
}
