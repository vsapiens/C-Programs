/* Erick Gonzalez
 September, 2017
 A01039859
 Conversion.cpp
 version 1.0
 */
#include <iostream>
#include <cmath>

using namespace std;
/*
 -->
 Analysis
 
 Input: A float number that refers to the temperature and a character that stands for the function it must convert
 Process: Once the integer is given, if character is "f" then the procedure is ((f-32)*5)/9 to obtain the celsius. If the "c" is given then the procedure is (c*9)/5 +32 to obtain the fahrenheit.
 Output: Obtain the float number of the temperature calculated from the formula.
 
-->Design
 StartProcess
    Write "Please enter "c" if your temperature is in Celsius and "f" if your temperature is in Fahrenheit";
    Read cDegree;
    Write "Please enter the degree of the temperature";
    Read fDegree;
    If (cDegree = 'c');
    fResult<- (c*9)/5 +32
    If (cDegree = 'f')
    fResult<-((f-32)*5)/9;
    Display "The new temperature is " fResult "."
 
 EndProcess
 */

/*
getDegree
 Function to get degree from the user
 Parameters:none
 Return: a character that stands for fahrenheit or celsius
 */
char getDegree(){
    char cDegree;
    cout<<"Please enter ""c"" if your temperature is in Celsius and ""f"" if your temperature is in Fahrenheit."<<endl;
    cin>> cDegree;
    return cDegree;
}
/*
 getTemperature
 Function to get the temperature from the user
 Parameters:none
 Return: a float number that is required to calculate the temperature
 */
float getTemperature(){
    float fTemperature;
    cout<<"Please enter the magnitude with decimal points if required for the temperature"<<endl;
    cin>> fTemperature;
    return fTemperature;
}
/*
 calculateFinalTemperature
 Function that enters the  the temperature from the user
 Parameters: one float numbers that stands for the temperature and one character tha stands for the type of degree
 Return: the resulting temperature
 */
float calculateFinalTemperature(float fTemperature, char cDegree){
    float fResult;
    if (cDegree == 'c')
        fResult = (fTemperature*9)/5 +32;
    if (cDegree == 'f')
         fResult = (((fTemperature-32)*5)/9);
    return fResult;
}
/*
 displayTemperature
 Function that displays the new temperature
 Parameter: one float number that stands for the result
 Return: the resulting temperature in a sentence
 */
void displayTemperature(float fResult){
    cout << "The new temperature is " << fResult<<"."<<endl;
}

/*
 main
 Function that calls the other functions
 Parameter: none
 Return: if the programs works it returns 0
 */
int main() {
    char cDegree;
    float fTemperature, fResult;
    cDegree = getDegree();
    fTemperature= getTemperature();
    fResult= calculateFinalTemperature(fTemperature, cDegree);
    displayTemperature(fResult);
    return 0;
}

/* Test Cases
 
 1. cDegree= c fTemperature= 0 fResult= 32
 2. cDegree= f fTemperature= 104 fResult= 40
 3. cDegree= c fTemperature= 25 fResult= 77
 */
