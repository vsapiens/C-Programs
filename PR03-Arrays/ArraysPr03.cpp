/* Erick Francisco González Martínez
 October, 2017
 ArraysPr03
 Programming Fundamentals (Ago 17 Gpo 10)
 version 1.0
 */
#include <iostream>
using namespace std;

/*
 countEvenNumbers
 This function calculates the number of even integers contained in the array
 Parameters: the length of an array and the array with the integers
 Returns: The number of even integers is contains
 */

int countEvenNumbers(int iHowMany, int iArrValues[]){
    
    int iCounter,iCounterEven;
    
    for (iCounter=0,iCounterEven=0;iCounter<iHowMany;iCounter++){
    
        if( iArrValues[iCounter]%2 ==0 ){
            
            iCounterEven++;
        }
    }
    return iCounterEven;
}
