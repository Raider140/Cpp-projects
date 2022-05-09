#include "Person.h"

Person::Person()
{
	firstName = lastName = identificationNumber = dateOfBirth = "";
	payRate = 0;
}

Person::Person(string fname, string lname, string iNum, string dob, double rate)
{
	firstName = fname;
	lastName = lname;
	identificationNumber = iNum;
	dateOfBirth = dob;
	payRate = rate;
}

string Person::getFirstName() { return firstName; }
string Person::getLastName() { return lastName; }
string Person::getIdentificationNumber() { return identificationNumber; }
string Person::getDateofBirth() { return dateOfBirth; }
double Person::getPayRate() { return payRate; }

void Person::setFirstName(string fname) { firstName = fname; }
void Person::setLastName(string lname) { lastName = lname; }
void Person::setIdentificationNumber(string iNum) { identificationNumber = iNum; }
void Person::setDateofBirth(string dob) { dateOfBirth = dob; }
void Person::setPayRate(double rate) { payRate = rate; }