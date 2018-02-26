/* Erick Francisco González Martínez
 October, 2017
 ArraysPr04
 Programming Fundamentals (Ago 17 Gpo 10)
 version 1.0
 */
#include <iostream>
using namespace std;

/*
 howManuyTimes
 This function calculates the number times an integer is in an array
 Parameters: the length of an array, the array with the integers and the value it wants to find
 Returns: The number of times the integer has been found
 */

int howManyTimes(int iHowMany, int iArrValues[], int Value)
{
    int iCounter, iCounterNumber;
    
    for(iCounter = 0,iCounterNumber=0; iCounter < iHowMany; iCounter++ )
        
        if ( iArrValues[iCounter] == Value){
            
            iCounterNumber++;
        }
    return iCounterNumber;
}