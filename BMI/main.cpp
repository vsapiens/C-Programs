/*
 Program to clasify a person's health based on height and body weight
 
 All rights reserved
 
 */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//Function to get the height from the user
double getHeight()
{
    cout << "Please enter your height in meters:" << endl;
    double dMyHeight;
    cin >> dMyHeight;
    return dMyHeight;
}

//Function to get the weight from the user
double getWeight()
{
    cout << "Please enter your weight in kilograms:" << endl;
    double dMyWeight;
    cin >> dMyWeight;
    return dMyWeight;
}

//Function to process the data an calculate the BMI using the formula
double calculateBMI(double dInputWeight, double dInputHeight)
{
    double dOperationResult;
    dOperationResult = (dInputWeight) / (dInputHeight * dInputHeight);
    return dOperationResult;
}

//Function to clasify the BMI number into the 3 categories
string BMIResult(double dBMINumber)
{
    string cClasification;
    if (dBMINumber > 25)
    {
        cClasification = "Overweight";
    }
    else if (dBMINumber >= 18.5 && dBMINumber <= 25)
    {
        cClasification = "Normal";
    }
    else
    {
        cClasification = "Underweight";
    }
    return cClasification;
}

//Functionn to output the final clasification of the person's health
void outputResult(string cResult, double dNumberOfBMI)
{
    cout << "Your BMI is " << dNumberOfBMI <<" and you are " << cResult << endl;
}

//Main Fucntion
int main()
{
    //Define the variables
    double dWeight, dHeight, dResult;
    string cFinalClasification;
    
    //Get the data from the user
    dWeight = getWeight();
    dHeight = getHeight();
    
    //Call function to process the user input
    dResult = calculateBMI(dWeight, dHeight);
    
    cFinalClasification = BMIResult(dResult);
    
    //Output the result
    outputResult(cFinalClasification, dResult);
    
    return 0;
}
