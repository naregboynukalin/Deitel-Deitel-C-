// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Create a BMI calculator application that reads the user’s weight in pounds and height in inches
// (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
// the user’s body mass index. Also, the application should display the following information from
// the Department of Health and Human Services/National Institutes of Health
// so the user can evaluate his/her BMI:
// BMI VALUES
// Underweight: less than 18.5
// Normal: between 18.5 and 24.9
// Overweight: between 25 and 29.9
// Obese: 30 or greater
//Body Mass Index(BMI) Calculator

#include<iostream>
using namespace std;

int
main() {
    double weight; //(kg)
    double height; //(m)
    double BMI;




    cout << "Enter your weight:";
    cin >> weight;
    cout << "Enter your height:";
    cin >> height;
    BMI = weight / (height * height);
    cout << "Your BMI is: " << BMI << endl;

    if (BMI < 18.5)
        cout << "Weak";

    else if (BMI < 24.9)
        cout << "Normal";
    else if (BMI < 29.9)
        cout << "Fat";
    else if (BMI > 30)
        cout << "Obese";

    return 0;





}
