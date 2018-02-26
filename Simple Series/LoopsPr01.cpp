#include <iostream>
#include <cmath>
using namespace std;
// Erick Francisco González Martínez
// October, 2017
// SIMPLE SERIES
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0
// Process

/*
 simpleSeries
 Function that calculates the user for the series
 Parameters: iPosition (integer positive number).
 Returns: iResult(integer positive number) the series
 */
int simpleSeries(int iPosition){
    cin>> iPosition;
    int iResult = 1;
    int iCounter = 1;
    
    while(iCounter < iPosition){
        iCounter++;
        iResult += 2;
    }
    return iResult;
}

int main(){
    return 0;
}

