// Erick Francisco González Martínez
// October, 2017
// ArraysCW01
// Programming Fundamentals (Ago 17 Gpo 10)`
// version 1.0
#include <iostream>
using namespace std;
/*
 readNumbers
 This function stores the values of the array and continues adding values until it decides
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
 sumValues
 This function calculates the values of the array given and displays
 Parameters: The arrray it will point at the memory and the limit of how many it would calculate
 Returns: nothing
 */
void sumValues(int iArrVal[], int iHowMany){
    
    int iCounter,iResult;
    
    for(iCounter=0,iResult=0; iCounter < iHowMany;iCounter++)
    {
        iResult += iArrVal[iCounter];
    }
    
    cout<<iResult<<endl;
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
    
    sumValues(iArrData,iNumber);
    
    return 0;
}





