/*
Name:
Date:
Class:
Program Purpose: The purpose of program is to create a class named person with its attributes, Then we inherit this class with
				 a subclass named as student. and then demonstrate the program
Testing Info:	I used the default driver program asked in the document created several objects and called their getter setter for 
				functionality.
*/

#include<iostream>
#include<fstream>
#include"Person.h"
#include"Student.h"

using namespace std;

int main()
{
	ofstream ofile("F:\\Littleoutput.txt");
	//Anyla Jacobs
	Person p1("Anyla", "Jacobs", "J425636", "August 13, 1970", 25.00);
	//Nadia McCoy
	Person p2("Nadia", "McCoy", "M916584,", "March 26, 1975,", 31.65);

    //John Smith student with pay rate
	Student s1("John", "Smith", "S521695", "May 3, 1997", 10.5, "December 12, 2019", "Networking Administration", 3.67);
    //Elenor Applecrumb student without pay rate
	Student s2("Elenor", "Applecrumb", "A258745", "June 30, 2000" , "May 5, 2020", "Business	Entrepreneurship", 2.91);
 
    ////Anyla Jacobs
	ofile << "Person 1" << endl;
	ofile << "Name: " << p1.getFirstName() << " " << p1.getLastName() << endl;
	ofile << "Identification Number: " << p1.getIdentificationNumber() << endl;
	ofile << "Date of Birth: " << p1.getDateofBirth() << endl;
	ofile << "Pay Rate: $" << p1.getPayRate()<< endl;
	ofile << "Gross Daily Pay: " << p1.getPayRate() * 8.0 << endl;
	ofile << "Gross Weekly Pay: " << p1.getPayRate() * 40.0 << endl << endl;

    //Nadia McCoy
	ofile << "Person 2" << endl;
	ofile << "Name: " << p2.getFirstName() << " " << p2.getLastName() << endl;
	ofile << "Identification Number: " << p2.getIdentificationNumber() << endl;
	ofile << "Date of Birth: " << p2.getDateofBirth() << endl;
	ofile << "Pay Rate: $" << p2.getPayRate()<< endl;
	ofile << "Gross Daily Pay: " << p2.getPayRate() * 8.0 << endl;
	ofile << "Gross Weekly Pay: " << p2.getPayRate() * 40.0 << endl << endl;

    //John Smith student with pay rate
	ofile << "Student 1" << endl;
	ofile << "Name: " << s1.getFirstName() << " " << s1.getLastName() << endl;
	ofile << "Identification Number: " << s1.getIdentificationNumber() << endl;
	ofile << "Date of Birth: " << s1.getDateofBirth() << endl;
	ofile << "Graduation Date: " << s1.getGraduationDate() << endl;
	ofile << "Major: " << s1.getMajor() << endl;
	ofile << "Gpa: " << s1.getGpa() << endl;
	ofile << "Pay Rate: $" << s1.getPayRate() << endl;
	ofile << "Gross Weekly Pay min 15 hours: " << s1.getPayRate() * 15.0 << endl;
	ofile << "Gross Weekly Pay max 19 hours: " << s1.getPayRate() * 19.0 << endl << endl;
    
    //Elenor Applecrumb student without pay rate
	ofile << "Student 2" << endl;
	ofile << "Name: " << s2.getFirstName() << " " << s2.getLastName() << endl;
	ofile << "Identification Number: " << s2.getIdentificationNumber() << endl;
	ofile << "Date of Birth: " << s2.getDateofBirth() << endl;
	ofile << "Graduation Date: " << s2.getGraduationDate() << endl;
	ofile << "Major: " << s2.getMajor() << endl;
	ofile << "Gpa: " << s2.getGpa() << endl;
}