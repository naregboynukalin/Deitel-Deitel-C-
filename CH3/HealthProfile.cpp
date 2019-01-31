
// HealthProfile.cpp
// Exercises from Chapter 3 "How to program C++ 9th edition"

// Self-review exercises from Chapter 3 "How to program C++ 9th edition"

// Design a "starter" HealthProfile class for a person. The class attributes should
// include the person’s first name, last name, gender, date of birth(consisting of
// separate attributes for the month, day and year of birth), height (in inches) and
// weight (in pounds). Your class should have a constructor that receives this data.
// For each attribute, provide set and get functions. The class also should include
// functions that calculate and return the user’s age in years, maximum heart rate and
// target-heart-rate range (see Exercise 3.16), and body mass index(BMI; see Exercise 2.30).
// Write an application that prompts for the person’s information, instantiates an object
// of class HealthProfile for that person and prints the information from that object — 
// including the person’s first name, last name, gender, date of birth, height and weight 
// — then calculates and prints the person’s age in years, BMI, maximum heart rate and
// target-heart-rate range. It should also display the "BMI values" chart from Exercise2.30.
// Use the same technique as Exercise3.16 to calculate the person’s age.

#include<iostream>
#include<string>
#include "HealthProfile.h"
using namespace std; 
 HealthProfile::HealthProfile(string firstName,string secondName,string Gender,
                              int Day,int Month,int Year,float Height,double Weight)
 {
    setName(firstName);
    setSurname(secondName);
    setDay(Day);
    setMonth(Month);
    setYear(Year);
    setGender(Gender);
    setHeight(Height);
    setWeight(Weight);
 }
 void HealthProfile::setDay(int Day)
{
    day=Day;
}
void HealthProfile::setMonth(int Month)
{
    month=Month;
}
void HealthProfile::setYear(int Year)
{
    year=Year;
}
 void HealthProfile::setName(string firstName)
 {
     name=firstName;
 }
  void HealthProfile::setSurname(string secondName)
  {
      surname=secondName;
  }
  void HealthProfile::setGender(string Gender)
  {
      gender=Gender;
  }
  void HealthProfile::setHeight(double Height)
  {
      height=Height;
  }
  void HealthProfile::setWeight(double Weight)
  {
      weight=Weight;
  }
          
int HealthProfile::getDay()
{
    return day;
}
int HealthProfile::getMonth()
{
    return month;
}
int HealthProfile::getYear()
{
    return year;
}
string HealthProfile::getName()
{
    return name;
}
string HealthProfile::getSurname()
{
    return surname;
}
string HealthProfile::getGender()
{
    return gender;
}
double HealthProfile::getHeight()
{
    return height;
}
double HealthProfile::getWeight()
{
    return weight;
}
int HealthProfile::getAge()
{
    int delta=0;
    int day,month,year;
    cout<<"Enter current date"<<endl;
    cin>>day>>month>>year;
    if( getMonth() > month) delta=-1;
    if( getMonth() == month && getDay() > day) delta=-1;
    
    return ( year- getYear() + delta );
    
    
    
}
int HealthProfile::getMaxHR()
{
    return (220- getAge());
    
    
}
int HealthProfile::getTargetHR()
{
    return ((220- getAge())*0.5);
}
double HealthProfile::getBMI()
{
    double BMI;
    BMI = getWeight()/(getHeight()*getHeight());
    
    if (BMI < 18.5)
        cout << "Weak";

    else if (BMI < 24.9)
        cout << "Normal";
    else if (BMI < 29.9)
        cout << "Fat";
    else if (BMI > 30)
        cout << "Obese";
    
    cout<<endl;
    
    return BMI;
    
    
}
                              