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

int main()
{
    HealthProfile healthProfile1("Nareg","Boynukalin","Male",15,10,1999,1.75,75);
    cout<<"His name and surname is:"<<healthProfile1.getName()<<" "<<healthProfile1.getSurname()
            <<".\n"<<"His gender is :"<<healthProfile1.getGender()<<".\n"<<"His birthday is :"
            <<healthProfile1.getDay()<<"\\"<<healthProfile1.getMonth()<<"\\"<<healthProfile1.getYear()
            <<".\n"<<"His body weight is :"<<healthProfile1.getWeight()<<".\n"<<"His weight is :"
            <<healthProfile1.getHeight()<<".\n"<<"His max heart rate is\n "<<healthProfile1.getMaxHR()
            <<" \nand target heart rate is between\n"
            <<healthProfile1.getTargetHR()<<" \nand\n "<<healthProfile1.getTargetHR()*8/5<<".\n"
            <<"His age is :"<<healthProfile1.getAge()<<".\n"<<"His BMI category is :"<<healthProfile1.getBMI()<<endl;
    cout << "BMI VALUES\n";
    cout << "Underweight: less than 18.5\n";
    cout << "Normal: between 18.5 and 24.9\n";
    cout << "Overweight: between 25 and 29.9\n";
    cout << "Obese: 30 or greater\n";
    
}
