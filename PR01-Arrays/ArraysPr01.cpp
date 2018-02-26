/* Erick Francisco González Martínez
 October, 2017
 ArraysPr01
 Programming Fundamentals (Ago 17 Gpo 10)
 version 1.0
 */
#include <iostream>
using namespace std;

/*
 bigger
 This function calculates the biggest number in an array
 Parameters: the length of an array and the array with the integers
 Returns: The number the biggest number of the array
 */

int bigger(int iHowMany, int iArrValues[]){
    
    int iCounter;
    
    for (iCounter=0; iCounter < iHowMany; iCounter++)
        
        if ( iArrValues[0] < iArrValues[iCounter]){
            
            iArrValues[0] = iArrValues[iCounter];
            
        }
    return iArrValues[0];
}
