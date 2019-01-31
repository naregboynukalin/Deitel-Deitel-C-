// Exercises from Chapter 3 "How to program C++ 9th edition"

// Self-review exercises from Chapter 3 "How to program C++ 9th edition"

// Create a class called Date that includes three pieces of information as data members —
// a month (type int), a day (type int) and a year (type int). Your class should have 
// a constructor with three parameters that uses the parameters to initialize the three
// data members. For the purpose of this exercise, assume that the values provided for
// the year and day are correct, but ensure that the month value is in therange 1–12;
// if it isn’t, set the month to 1. Provide a set and a get function for each data member.
// Provide a member function displayDate that displays the month, day and year
// separated by forward slashes (/). Write a test program that demonstrates
// class Date’s capabilities.


#include<iostream>
#include "Date.h"
using namespace std;


int main()
{
    Date date1(15,10,1999);
    Date date2(17,8,2005);
    cout<<"Nareg Boynukalin's birthday is :"<<date1.displayDate()<<endl;
    cout<<"Garen Boynukalin's birthday is :"<<date2.displayDate()<<endl;
}
