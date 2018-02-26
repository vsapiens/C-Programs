//
//  main.cpp
//  Roots
//
//  Created by Erick Gzz on 9/15/17.
//  Copyright © 2017 Erick Gzz. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void roots(float fCoefA, float fCoefB, float fCoefC,float &fRoot1, float &fRoot2)
/* & is used for creating reference variables
 type = parameter by value
 & = parameter by reference
     --> used when returning two or more values
     --> used when the strucutre of the function is weird
 */
{
    float fRad;
    fRad = sqrt(pow(fCoefB,2)-4*fCoefA*fCoefC);
    fRoot1 = (-fCoefB-fRad)/(2*fCoefA);
    fRoot2 = (fCoefB-fRad)/(2*fCoefA);
}
void Guess(int &iNumber1, int &iNumber2, int &iNumber3, int &iResult1,int &iResult2) {
    srand(time(0));
    iNumber1= rand();
    iNumber2=rand();
    iNumber3=rand();
    iResult1 = iNumber1 * iNumber2;
    iResult2 =iNumber1+ iNumber2;
}

/*
 rand() is a function that may return the same value if the function
 
 */
void biggestandlowestNumber(int iNumber1,int iNumber2,int iNumber3, int iBiggestNumber,int iSmallestNumber)
{
    srand(time(0));
    iNumber2= rand()%100;
    iNumber1= rand()%10;
    iNumber3= rand()&1000;
    //Compare the numbers and if the first number is bigger than the second and third
    if (iNumber1 > iNumber3 && iNumber1 > iNumber2)
    {
        iBiggestNumber = iNumber1;
        iSmallestNumber = iNumber2;
    }
    else
    {
        //Compare the numbers and if the third number is bigger than the second and first
        if (iNumber3 > iNumber2 && iNumber3>iNumber1)
        {
            iBiggestNumber = iNumber3;
            iSmallestNumber = iNumber1;
        }
        //If any of the previous conditions are approved then the biggest number is the second
        else
            if (iNumber2 > iNumber1 && iNumber2 > iNumber3)
            {
                iBiggestNumber = iNumber2;
                iSmallestNumber = iNumber3;
            }
    }
    cout<<iBiggestNumber<<" is always bigger than "<< iSmallestNumber<<endl;
}
        
int main() {
    biggestandlowestNumber(1, 2, 3,3,4);
    return 0;
}


