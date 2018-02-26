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
 Returns: Receives the number of terms it wants to sum(integer positive number)
 */
double getData(){
    double dFraction;
    cin>>dFraction;
    return dFraction;
}
/*
 calculateSeries
 Function that calculates the sum of the series.
 Parameters: The number of fractions the user wants to add within the series (integer positive number).
 Returns: The sum of the fractions until the series are repeated(double number)
 */
double CalculateSeries(double iFraction)
{
    double dResult=0;
    for(double dDenominator =2.0, dNumerator=1.0; dDenominator <= (iFraction+1);dDenominator++, dNumerator++)
    {
        dResult = (dResult + (dNumerator/dDenominator)*pow(-1,dDenominator));
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

