// Invoice.cpp
// Exercises from Chapter 3 "How to program C++ 9th edition"

// Self-review exercises from Chapter 3 "How to program C++ 9th edition"

// Create a class called Invoice that a hardware store might use to represent an invoice
// for an item sold at the store. An Invoice should include four data members �
// a part number (type string), a part description (type string), a quantity of the item
// being purchased (type int) and a price per item (type int). Your class should have
// a constructor that initializes the four data members. Provide a set and a get function for
// each data member. In addition, provide a member function named getInvoiceAmount
// that calculates the invoice amount (i.e., multiplies the quantity by the price per item),
// then returns the amount as an int value. If the quantity is not positive, it should be set to 0.
// If the price per item is not positive, it should be set to 0. Write a test program that
// demonstrates class Invoice�s capabilities.


#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string number,string desc,int quant,int pri)
{
    setPartNum(number);
    setPartDesc(desc);
    setItemQuantity(quant);
    setPrice(pri);
   
}
void Invoice::setPartNum(string number)
{
    partNum=number;
}
void Invoice::setPartDesc(string desc)
{
    partDesc=desc;
}
void Invoice::setItemQuantity(int quant)
{
    if(quant>=0)
        itemQuantity=quant;
    else
    {
        cout<<" The item quantity is not valid.Setting to 0..."<<endl;
        itemQuantity=0;
    }
}
void Invoice::setPrice(int pri)
{
    if(pri>=0)
        price=pri;
    else
    {
        cout<<" The item price is not valid.Setting to 0..."<<endl;
        price=0;
    }
}
int Invoice::getAmount()
{
    return itemQuantity*price;
}        
string Invoice::getDesc()
{
    return partDesc;
}
int Invoice::getItemQuantity()
{
    return itemQuantity;
}
string Invoice::getPartNum()
{
    return partNum;
}
int Invoice::getPrice()
{
    return price;
}
            
