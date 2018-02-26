// Erick Francisco González Martínez
// October, 2017
// ArraysHW01
// Programming Fundamentals (Ago 17 Gpo 10)`
// version 1.0
#include <iostream>
using namespace std;
/*
 readNumbers
 This function stores the values of the array and continues adding values until the user decides to
 Parameters: The arrray it will receive from the user and the amount of numbers it would like to calculate
 Returns: nothing
 */
void readNumbers(int iArrNum[],int &iNumber){
    cin>>iNumber;
    int iCounter;
    for(iCounter=0; iCounter < iNumber;iCounter++)
    {
        cin>>iArrNum[iCounter];
    }
}
/*
 greaterNum
 This function calculates stores the greatest value of the array given
 Parameters: The arrray it will point at the memory and count until the number of spaces in the array are compared
 Returns: The first number which is the greates value since it has been replaced;
 */
int greaterNum(int iArrVal[], int iHowMany){
    
    int iCounter;
    for(iCounter=0; iCounter < iHowMany;iCounter++)
    {
        if (iArrVal[0] < iArrVal[iCounter])  {
            iArrVal[0] = iArrVal[iCounter];
        }
    }
    return iArrVal[0];
}
/*
 displayNumber
 This function displays the greatest number of an array
 Parameters:
 Returns: nothing
 */
void displayNumber(int iArrVal[]){
    cout<<iArrVal[0]<<endl;
}

/*
 main
 This function calls the input and output functions
 that together display the sequence of the numbers
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    
    int iArrData[20],iNumber;
    readNumbers(iArrData,iNumber);
    iArrData[0]= greaterNum(iArrData,iNumber);
    displayNumber(iArrData);
    return 0;
}


