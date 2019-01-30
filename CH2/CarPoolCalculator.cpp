// Exercises from Chapter 2 "How to program C++ 9th edition"

// Self-review exercises from Chapter 2 "How to program C++ 9th edition"

// Create an application that calculates your daily driving cost, so that you can 
// estimate how much money could be saved by car pooling, which also has other
// advantages such as reducing carbon emissions and reducing traffic congestion.
// Theapplication should input the following information and display the user’s cost
// per day of driving to work:
// a) Total miles driven per day.
// b) Cost per gallon of gasoline.
// c) Average miles per gallon.
// e) Tolls per day.
//Car-Pooling Calculator

#include<iostream>
using namespace std;
int main()
{
    double GasPrice;
    double Fuel;
    double Distance;
    int people;
    double cost;
    double saving;
    
    cout<<"Enter the Gas Price/litre: ";
    cin>>GasPrice;
    cout<<"Enter your vehicle's fuel economy litre/km: ";
    cin>>Fuel;
    cout<<"Enter your total distance/day: ";
    cin>>Distance;
    cout<<"Enter the number of people in your vehicle :";
    cin>>people;
    
    cost= GasPrice*Fuel*Distance;
    saving=cost-(cost/people);
    cout<<"Your savings: "<<saving<<"$";
    
    return 0;
    
    
}
