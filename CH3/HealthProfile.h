// HealthProfile.h
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

#include<string>
using namespace std;

class HealthProfile
{
public:
    HealthProfile(string,string,string,int,int,int,float,double);
    string getName();
    string getSurname();
    void setName(std::string);
    void setSurname(std::string);
    void setGender(string);
    void setHeight(double);
    void setWeight(double);
    int getDay();
    int getMonth();
    int getYear();
    string getGender();
    double getHeight();
    double getWeight();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getAge();
    int getMaxHR();
    int getTargetHR();
    double getBMI();
    
private:
    string name;
    string surname;
    string gender;
    int day;
    int month;
    int year;
    float height;
    double weight;
};