#pragma once
#include <string>
#include "Degree.h"
using std::string;

class Student
{
public:
	const static int daysArraySize = 3;
	Student();
	Student(string ID, string firstName, string lastName, string email, int age, int numDaysComplete[]);

	//Getters
	string getID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int* getnumDaysComplete();
	virtual StudentMajor getStudentMajor() = 0;

	//Setters
	void setID(string ID);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setEmail(string email);
	void setAge(int age);
	void setNumDaysComplete(int numDaysComplete[]);
	virtual void print() = 0;

  
protected:
	string M_ID;
	string M_firstName;
	string M_lastName;
	string M_emailAddress;
	int    M_age;
	int    M_numDaysComplete[daysArraySize];
	StudentMajor M_degreeType;


};

