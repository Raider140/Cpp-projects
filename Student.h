#ifndef STUDENT_H
#define STUDENT_H
#pragma once
#include "Person.h"
class Student :
    //student contains all the accessors and mutators from the person public class because they are people too
    public Person
{
private:

    //private class has student data 
    string graduationDate;
    string major;
    double gpa;

public:
//overloaded public student function for both students with and then without pay rates
    Student(string fname, string lname, string iNum, string dob, double rate, string gradDate, string maj, double Gpa);
    Student(string fname, string lname, string iNum, string dob, string gradDate, string maj, double Gpa);

    string getGraduationDate();
    string getMajor();
    double getGpa();

    void setGraduationDate(string gradDate);
    void setMajor(string maj);
    void setGpa(double Gpa);
};



#endif
