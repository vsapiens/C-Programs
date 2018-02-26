/* Erick Francisco González Martínez
 October, 2017
 ArraysHW02
 Programming Fundamentals (Ago 17 Gpo 10)
 version 1.0
 */
#include <iostream>
using namespace std;

/*
 identical
 This function calculates stores the greatest value of the array given
 Parameters: The arrray it will point at the memory and count until the number of spaces in the array are compared
 Returns: The first number which is the greates value since it has been replaced;
 */
bool identical(int iHowMany1, int iArrValues1[], int iHowMany2, int iArrValues2[]){
    
    int iCounter;
    
    bool bAnswer= false;
    
    if (iHowMany1 == iHowMany2)
    {
        
        for(iCounter=0; iCounter < iHowMany1 ;iCounter++)
        {
        
            if (iArrValues2[iCounter] == iArrValues1[iCounter])
            {
                bAnswer= true;
            }
            
            else  bAnswer= false;
        }
    }
    
    return  bAnswer;
}
/*
 Author: J. Giese
 Dummy.cpp
 v. 1.0
 Main template for array exercises
 */
#include <iostream>
using namespace std;

extern bool identical(int iHowMany1, int iArrValues1[], int HowMany2, int iArrValues2[]);

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
 displayResults
 Description:
 Parameters:
 Returns:
 */
void displayResults(bool bResult)
{
    cout << bResult << endl;
}

/*
 main
 Description:
 Parameters:
 Returns:
 */
int main()
{
    bool bAnswer;
    int iHowMany1, iArrValues1[50];
    int iHowMany2, iArrValues2[50];
    readData(iHowMany1, iArrValues1);
    readData(iHowMany2, iArrValues2);
    bAnswer = identical(iHowMany1, iArrValues1, iHowMany2, iArrValues2);
    displayResults(bAnswer);
    return 0;
}
