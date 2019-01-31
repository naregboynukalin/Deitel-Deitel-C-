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

int main()
{
    HeartRates patient1("Nareg","Boynukalin",15,10,1999);
    cout<<"His name is "<<patient1.getName()<<" and surname is "<<patient1.getSurname()
            <<". "<<"His birthday is "<<patient1.getDay()<<"\\"<<patient1.getMonth()<<"\\"
            <<patient1.getYear()<<"."<<"\nHis age is...\n "<<patient1.getAge()
            <<"\nHis max heart rate is\n "<<patient1.getMaxHR()<<" \nand target heart rate is between\n"
            <<patient1.getTargetHR()<<" \nand\n "<<patient1.getTargetHR()*8/5<<endl;
}
