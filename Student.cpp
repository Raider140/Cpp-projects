#include "Student.h"
//first student with pay rate
Student::Student(string fname, string lname, string iNum, string dob, double rate, string gradDate, string maj, double Gpa)
	:Person(fname, lname, iNum, dob, rate)
{
	graduationDate = gradDate;
	major = maj;
	gpa = Gpa;
}
Student::Student(string fname, string lname, string iNum, string dob, string gradDate, string maj, double Gpa)
	:Person(fname, lname, iNum, dob, 0)
{
	graduationDate = gradDate;
	major = maj;
	gpa = Gpa;
}

string Student::getGraduationDate() { return graduationDate; }
string Student::getMajor() { return major; }
double Student::getGpa() { return gpa; }

void Student::setGraduationDate(string gradDate) { graduationDate = gradDate; }
void Student::setMajor(string maj) { major = maj; }
void Student::setGpa(double Gpa) { gpa = Gpa; }