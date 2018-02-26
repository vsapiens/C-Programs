// Erick Francisco González Martínez
// October, 2017
// Factorials
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0



#include <iostream>
using namespace std;


/*
 getData
 Function that requests the user for the number.
 Parameters: none
 Returns: iFactorial(integer positive number)
 */
int getData(){
    int iFactorial;
    cin>>iFactorial;
    return iFactorial;
}
/*
 calculateFactorial
 Function that calculates the factorial number.
 Parameters: iFactorial (integer positive number).
 Returns: iResult(integer positive number) number of the factorial
 */
int CalculateFactorial(int iFactorial){
    int iResult = 1;
    int iCounter = 1;
    
    while(iCounter<iFactorial){
        iCounter++;
        iResult*= iCounter;
    }
    return iResult;
}
/*
 displayFact
 This function will display the resulting number of factorial onto the screen.
 Parameters: iFactorial (integer positive), factorial
 Returns: nothing
 */
void displayFact(int iFactorial){
    cout<< iFactorial<<endl;
}

/*
 main
 This function calls the input, processing and output functions
 that together calculates the factorial number given
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    int iResult, iFactorial;
    iFactorial= getData();
    iResult= CalculateFactorial(iFactorial);
    displayFact(iResult);
    return 0;
}


