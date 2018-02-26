// Erick Francisco González Martínez
// October, 2017
// Fractions Looping
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0
#include <iostream>
using namespace std;

/*
 getData
 Function that requests the user for the number.
 Parameters: none
 Returns: Receives the number of terms it wants to sum(integer positive number)
 */
int getData(){
    int iFraction;
    cin>>iFraction;
    return iFraction;
}
/*
 calculateSeries
 Function that calculates the sum of the series.
 Parameters: The number of fractions the user wants to add (integer positive number).
 Returns: The sum of the fraction(double positive number)
 */
double CalculateSeries(int iFraction)
{
    double dResult=0;
    for(double dCounter=2.0; dCounter <= iFraction + 1; dCounter++)
    {
        dResult = (dResult + 1/dCounter);
    }
    return dResult;
}
/*
 displayFraction
 This function will display the result of the fractions.
 Parameters: (double positive) it displays the resulting sum of the fractions
 Returns: nothing
 */
void displayFraction(double dFraction){
    cout<< dFraction<<endl;
}

/*
 main
 This function calls the input, processing and output functions
 that together calculates the factorial number given
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    double dResult;
    int iFraction;
    iFraction= getData();
    dResult= CalculateSeries(iFraction);
    displayFraction(dResult);
    return 0;
}
