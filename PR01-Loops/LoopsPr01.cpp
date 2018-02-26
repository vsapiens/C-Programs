/*
 Erick González
 A01039859
 October, 2017
 Pr01Loops
 Programming Fundamentals
 version 1.0
 */
#include <iostream>

/*
 calculateValue
 This function calculates the value from the series
 Paramaters: Position from the series it must calculate
 Returns: the value of the position within the series
 
 */
int calculateValue(int iPosition)
{
    int iValue;
    
    if (iPosition % 3 ==0)
    {
        iValue = iPosition*(-3)+1;
    }
    
    else iValue = iPosition*3-1;
    
    return iValue;
}
