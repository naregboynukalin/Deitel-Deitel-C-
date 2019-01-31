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

#include<string>
class HeartRates
{
public:
    HeartRates(std::string,std::string,int,int,int);
    std::string getName();
    std::string getSurname();
    void setName(std::string);
    void setSurname(std::string);
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getAge();
    int getMaxHR();
    int getTargetHR();
    
private:
    std::string name;
    std::string surname;
    int day;
    int month;
    int year;
    
   
};