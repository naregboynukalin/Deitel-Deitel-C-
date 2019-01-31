// HeartRates.h
// Exercises from Chapter 3 "How to program C++ 9th edition"

// Self-review exercises from Chapter 3 "How to program C++ 9th edition"

// Create a class called HeartRates. The class attributes should include the person’s firstname,
// last name and date of birth (consisting of separate attributes for the month, day and year
// of birth). Your class should have a constructor that receives this data as parameters.For each
// attribute provide set and get functions. The class also should include a function getAge that
// calculates and returns the person’s age (in years), a function getMaxiumumHeartRate that
// calculates and returns the person’s maximum heart rate and a function getTargetHeartRate
// that calculates and returns the person’s target heart rate. Since you do not yet know how to 
// obtain the current date from the computer, function getAge should prompt the user to enter
// the current month, day and year before calculating the person’s age. Write an application
// thatprompts for the person’s information, instantiates an object of class HeartRates and prints
// theinformation from that object — including the person’s first name, last name and date of birth
// — then calculates and prints the person’s age in (years), maximum heart rate and
// target-heart-rate range.

#include<iostream>
#include<string>
#include "HeartRates.h"
using namespace std; 

HeartRates::HeartRates(string firstName,string secondName,int Day,int Month,int Year)
{
    setName(firstName);
    setSurname(secondName);
    setDay(Day);
    setMonth(Month);
    setYear(Year);
}
void HeartRates::setDay(int Day)
{
    day=Day;
}
void HeartRates::setMonth(int Month)
{
    month=Month;
}
void HeartRates::setYear(int Year)
{
    year=Year;
}
 void HeartRates::setName(string firstName)
 {
     name=firstName;
 }
  void HeartRates::setSurname(string secondName)
  {
      surname=secondName;
  }
int HeartRates::getDay()
{
    return day;
}
int HeartRates::getMonth()
{
    return month;
}
int HeartRates::getYear()
{
    return year;
}
string HeartRates::getName()
{
    return name;
}
string HeartRates::getSurname()
{
    return surname;
}
int HeartRates::getAge()
{
    int delta=0;
    int day,month,year;
    cout<<"Enter current date"<<endl;
    cin>>day>>month>>year;
    if( getMonth() > month) delta=-1;
    if( getMonth() == month && getDay() > day) delta=-1;
    
    return ( year- getYear() + delta );
    
    
    
}
int HeartRates::getMaxHR()
{
    return (220- getAge());
    
    
}
int HeartRates::getTargetHR()
{
    return ((220- getAge())*0.5);
}
