// Employee.cpp
// Exercises from Chapter 3 "How to program C++ 9th edition"

// Self-review exercises from Chapter 3 "How to program C++ 9th edition"

// Create a class called Employee that includes three pieces of information as data members 
// — a first name (type string), a last name (type string) and a monthly salary (type int).
// Your class should have a constructor that initializes the three data members.Provide a set
// and a get function for each data member. If the monthly salary is not positive, set it to 0.
// Write a test program that demonstrates class Employee’s capabilities. Create two Employee
// objects and display each object’s yearly salary. Then give each Employee a 10 percent raise 
// and display each Employee’s yearly salary again.

#include<iostream>
#include "Employee.h"
#include<string>
using namespace std;

Employee::Employee(string firstName,string secondName, int money)
{
    setName(firstName);
    setSurname(secondName);
    setFee(money);
}
void Employee::setName(string firstName)
{
    name=firstName;
}
void Employee::setSurname(string secondName)
{
    surname=secondName;
}
void Employee::setFee(int money)
{
    if(money>0)
        fee=money;
    else
    {
        fee=0;
    }
}
int Employee::getFee()
{
    return fee;
}
string Employee::getName()
{
    return name;
    
}
string Employee::getSurname()
{
    return surname;
}

        