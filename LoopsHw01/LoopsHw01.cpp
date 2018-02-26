// Erick Francisco González Martínez
// October, 2017
// Fractions Looping Alternating
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0
#include <iostream>
#include <cmath>
using namespace std;

/*
 getData
 Function that requests the user for the number.
 Parameters: none
 Returns: Receives the number of terms it must be displayed (integer positive number)
 */
int getData(){
    int iNum;
    cin>>iNum;
    return iNum;
}

/*
 displaySequence1
 This function will display the result of the sequence in reverse but no 1.
 Parameters: (integer positive number) it displays the resulting sequence
 Returns: nothing
 */
void displaySequence1(int iNum){
    for (int iCounter=1 ; iCounter <= iNum;iNum--){
        cout<< iNum<<endl;
    }
}
/*
 displaySequence2
 This function will display the result of the sequence including the 1 until the final number.
 Parameters: (integer positive number) it displays the resulting sequence
 Returns: nothing
 */
void displaySequence2(int iNum){
    for (int iCounter=2 ; iCounter <= iNum;iCounter++){
        cout<< iCounter<<endl;
    }

}
/*
 main
 This function calls the input and output functions
 that together display the sequence of the numbers
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    int iNum;
    iNum= getData();
    displaySequence1(iNum);
    displaySequence2(iNum);
    return 0;
}




