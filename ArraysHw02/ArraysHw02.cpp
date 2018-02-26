/* Erick Francisco González Martínez
 October, 2017
 ArraysHW02
 Programming Fundamentals (Ago 17 Gpo 10)
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
int readNumbers(char cArrNum[]){
    
    int iSize;
    
    cin>>iSize;
    
    int iCounter;
    
    for(iCounter=0; iCounter < iSize;iCounter++)
    {
        cin>>cArrNum[iCounter];
    }
    return iSize;
}
/*
 greaterNum
 This function calculates stores the greatest value of the array given
 Parameters: The arrray it will point at the memory and count until the number of spaces in the array are compared
 Returns: The first number which is the greates value since it has been replaced;
 */
bool greaterNum(char cArrVal[], int iHowMany){
    
    int iCounter,iAnswer=0;
    
    for(iCounter=0; iCounter < iHowMany;iCounter++){
        
        if (cArrVal[iCounter] == '!')
        {
            iAnswer= 1;
        }
    }
    return  iAnswer;
}
/*
 displayNumber
 This function displays the greatest number of an array
 Parameters: the value stored as false or true in the first array
 Returns: nothing
 */
void displayNumber(int iAnswer){
    
    if(iAnswer == 1)
        
        cout<< "1" <<endl;
    
    else cout<< "0" <<endl;
    
}

/*
 main
 This function calls the input and output functions
 that together display the sequence of the numbers
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    
    char iArrData[50];
    int iNumber,iAnswer;
    iNumber = readNumbers(iArrData);
    iAnswer = greaterNum(iArrData,iNumber);
    displayNumber(iAnswer);
    return 0;
}
