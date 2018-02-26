/* Erick Francisco González Martínez
 October, 2017
 ArraysHW02
 Programming Fundamentals (Ago 17 Gpo 10)`
 version 1.0
 */

#include <iostream>
using namespace std;

/*
 readNumbers
 This function stores the values of the array and continues adding values until the limit
 Parameters: The arrray it will receive from the user and the amount of numbers it would like to calculate
 Returns: nothing
 */
int readNumbers(int iArrNum[])
{
    int iHowMany;
    
    cin>>iHowMany;
    
    int iCounter;
    
    for(iCounter=0; iCounter < iHowMany;iCounter++)
    {
        cin>>iArrNum[iCounter];
    }
    return iHowMany;
}

/*
 searchNum
 This function searches for the number of 5 in a series and stores it in another array
 Parameters: The first array is the one it has received from the input, the second is the size of the array and it includes the array with the positions
 Returns: The number of times it has find a 5 in the series;
 */
int searchNum(int iArrVal[], int iHowMany,int iArrNum5[]){
    
    int iCounter5=0;
    
    for(int iCounter=0; iCounter < iHowMany;iCounter++)
    {
        if(iArrVal[iCounter] == 5)
        {
            
            iArrNum5[iCounter5] = iCounter;
            
            iCounter5++;
            
        }
    }
    return iCounter5;
}
/*
 displayNumber
 This function displays the position of the array and if none it displays a -1
 Parameters: receives all the array with the position and the number of 5 it has found
 Returns: nothing
 */
void displayPosition(int iArrNum5[],int iCounter5)
{
    if (iCounter5 == 0)
    {
        cout<< -1;
        
    }
    {
        
        for(int iCounter=0; iCounter < iCounter5; iCounter++)
        {
            cout<<iArrNum5[iCounter]<<" ";
        }
        
    }
    cout << endl;
}

/*
 main
 This function calls the input and output functions
 that together display the sequence of the numbers
 Parameters: none
 Returns: 0 (program is ok)
 */

int main(){
    
    int iArrData[200],iArrNum[200],iNumber=0,iHowMany;
    
    iHowMany = readNumbers(iArrData);
    
    iNumber = searchNum(iArrData,iHowMany,iArrNum);
    
    displayPosition(iArrNum,iNumber);
    
    return 0;
}

