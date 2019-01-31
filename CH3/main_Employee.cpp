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
int main()
{
    Employee employee1("Nareg","Boynukalin",5000);
    Employee employee2("Garen","Boynukalin",3500);
    cout<<"The first employee's name and surname is  "<<employee1.getName()
           <<" "<<employee1.getSurname()<<"\nAnd his fee is :"<<employee1.getFee()<<"$"<<endl;
    cout<<"His whole year gain is:"<<employee1.getFee()*12<<"$"<<endl;
    employee1.setFee(employee1.getFee() * 1.1);
    cout<<"After the %10 raise his new year gain is:"<<employee1.getFee()*12<<"$"<<endl;
    cout<<endl;
    
     cout<<"The second employee's name and surname is  "<<employee2.getName()
           <<" "<<employee2.getSurname()<<"\nAnd his fee is :"<<employee2.getFee()<<"$"<<endl;
    cout<<"His whole year gain is:"<<employee2.getFee()*12<<"$"<<endl;
    employee2.setFee(employee2.getFee() * 1.1);
    cout<<"After the %10 raise his new year gain is:"<<employee2.getFee()*12<<"$"<<endl;
}
