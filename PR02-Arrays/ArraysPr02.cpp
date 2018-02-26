/* Erick Francisco González Martínez
 October, 2017
 ArraysPr02
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
int underAverage(int iHowMany, int iArrValues[]){
    
    int iSum,iAverage,iCounter,iManyFound;
    
    for(iCounter=0,iSum=0; iCounter < iHowMany; iCounter++)
    {
        iSum += iArrValues[iCounter];
        
    }
    
    iAverage = iSum / iHowMany;
    
    for(iCounter=0,iManyFound=0; iCounter < iHowMany;iCounter++)
    {
        if( iArrValues[iCounter] < iAverage)
        {
            iManyFound++;
        }
        
    }
    return iManyFound;
}

/*
 readData
 Description:
 Parameters:
 Returns:
 */
void readData(int &iHowMany, int iArrValues[])
{
    int iCounter;
    cin >> iHowMany;
    
    for (iCounter = 0; iCounter < iHowMany; iCounter++)
    {
        cin >> iArrValues[iCounter];
    }
}

/*
 displayResult
 Description:
 Parameters:
 Returns:
 */
void displayResult(int iManyFound)
{
    cout << iManyFound << endl;
}

/*
 main
 Description:
 Parameters:
 Returns:
 */
int main()
{
    int iResult;
    
    int iHowMany, iArrValues[50], iHowManyAbove, iArrNumbersAbove[50];
    readData(iHowMany, iArrValues);
    iResult = underAverage(iHowMany, iArrValues);
    displayResult(iResult);
    return 0;
}
