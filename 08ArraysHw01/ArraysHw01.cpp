/* Erick Francisco González Martínez
 October, 2017
 ArraysHW02
 Programming Fundamentals (Ago 17 Gpo 10)
 version 1.0
 */
#include <iostream>
using namespace std;

/*
 obtainAboveAverage
 This function displays the greatest number of an array
 Parameters: the value stored as false or true in the first array
 Returns: nothing
 */
void obtainAboveAverage(int iHowMany, int iArrValues[], int &iManyFound, int iArrAbove[]){
    
    int iSum,iAverage,iCounter,iCounterAverage;
    
    for(iCounterAverage=0,iSum=0; iCounterAverage < iHowMany; iCounterAverage++)
    {
        iSum += iArrValues[iCounterAverage];

    }
    
    iAverage = iSum / iCounterAverage;
    
    for(iCounter=0,iManyFound=0; iCounter < iHowMany;iCounter++)
    {
            if( iArrValues[iCounter] > iAverage)
            {
                iArrAbove[iManyFound] = iArrValues[iCounter];
                
                iManyFound++;
            }
        
    }
    
}
