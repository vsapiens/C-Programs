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
 This function validates if the array is going in order
 Parameters: The arrray it will point at the memory and count until the number of spaces in the array are compared
 Returns: The bool if the array is in order;
 */
int greaterNum(int iArrVal[], int iHowMany){
    int iValidate= -1;
    int iCounter;
    for(iCounter=1; iCounter < iHowMany;iCounter++)
        if (iArrVal[iCounter] < iArrVal[iCounter-1]){
            bValidate= false;
        }
    return bValidate;
    }
/*
 displayNumber
 This function displays the greatest number of an array
 Parameters: the value stored as false or true in the first array
 Returns: nothing
 */
void displayNumber(bool bValidate){
    cout<<bValidate<<endl;
}

/*
 main
 This function calls the input and output functions
 that together display the sequence of the numbers
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    int iArrData[200];
    int iNumber;iValidate;
    readNumbers(iArrData,iNumber);
    iValidate = greaterNum(iArrData,iNumber);
    displayNumber(iValidate);
    return 0;
}



