
#ifndef PERSON_H
#define PERSON_H
#pragma once
#include<iostream>
using namespace std;



class Person
{
    //the private contains the person's details
private:
	string firstName;
	string lastName;
	string identificationNumber;
	string dateOfBirth;
	double payRate;

public:
    //the public class contains the accessors and mutators
	Person();
	Person(string fname, string lname, string iNum, string dob, double rate);

	string getFirstName();
	string getLastName();
	string getIdentificationNumber();
	string getDateofBirth();
	double getPayRate();

	void setFirstName(string fname);
	void setLastName(string lname);
	void setIdentificationNumber(string iNum);
	void setDateofBirth(string dob);
	void setPayRate(double rate);
};
#endif

