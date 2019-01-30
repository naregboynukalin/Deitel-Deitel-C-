// GradeBook.cpp
// Exercises from Chapter 3 "How to program C++ 9th edition"

// Self-review exercises from Chapter 3 "How to program C++ 9th edition"

// Modify class GradeBook (Figs. 3.11–3.12) as follows:
// a) Include a second string data member that represents the course instructor’s name.
// b) Provide a set function to change the instructor’s name and a get function to retrieve it.
// c) Modify the constructor to specify course name and instructor name parameters.
// d) Modify function displayMessage to output the welcome message and course name,
// then the string "This course is presented by: " followed by the instructor’s name.
// Use your modified class in a test program that demonstrates the class’s new capabilities.

// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include<iostream>
#include<string>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name,string iname)

{
    setCourseName(name);
    setInstructorName(iname);
    
}
void GradeBook::setInstructorName(string iname)
{
   instructorName=iname;
}
string GradeBook::getInstructorName() const
{
    return  instructorName;
}
void GradeBook::setCourseName(string name)
{
    courseName=name;
}

string GradeBook::getCourseName() const
{
    return courseName;
}
void GradeBook::displayMessage() 
{
   cout << "Welcome to the grade book for: " << getCourseName() 
	<< "!" << endl;
	cout << "This course is presented by: " << getInstructorName() << "." << endl;
}
