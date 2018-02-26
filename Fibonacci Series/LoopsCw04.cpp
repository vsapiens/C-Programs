// Erick Francisco González Martínez
// October, 2017
// Fibonacci
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0
#include <iostream>
using namespace std;

/*
 fibo
 Function that calculates the sum of the series.
 Parameters: The number of fractions the user wants to add (integer positive number).
 Returns: The number of the fibonacci series(int positive number)
 */
int fibo(int iPosition )
{
    int iFirstSeries = 1;
    int iPreviousSum = 1;
    int iLastSum = 1;
    for(int iNumber=2; iNumber < iPosition;++iNumber)
    {
        iFirstSeries = iPreviousSum + iLastSum;
        iLastSum = iPreviousSum;
        iPreviousSum = iFirstSeries;
    }
    
    return iFirstSeries;
}

