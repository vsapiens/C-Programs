//  Erick Francisco González Martínez
//  September, 2017
//  homework04_A01039859.cpp
//  Programming Fundamentals (Ago 17 Gpo 10)
//  version 1.0

#include <iostream>


using namespace std;

/*
 Analysis
 
 Input: 2 floating numbers and a character
 Process: Do the operation depending on the letter that is provided
         a-addition
         s-substraction
         d-division
         m-multiplying
 Output: The result of the operation between the two numbers
 
-->Calculator
 Function that requests the user for the operation of two numbers and returns the result.
 Parameters: Number1, Number2, and character of Operation
 Returns: iResult(floating point number), result of the operation between two numbers.
*/

//Enter the variables in the parameters
float Calculator(float fNumber1, float fNumber2,char cOperation)

{
    float fResult;
    //If the character is a, the addtion is performed
    if (cOperation == 'a')
        
        fResult = fNumber1+fNumber2;
    
    else
        
    {
    //If the character is s, the addtion is substract
        if (cOperation == 's')
            
            fResult = fNumber1-fNumber2;
        
        else
        {
    //If the character is m, the addtion is multiplying
            if (cOperation == 'm')
                
                fResult = fNumber1 * fNumber2;
    //If the character is d, the addtion is divison
            else if(cOperation == 'd')
                fResult = fNumber1 / fNumber2;
        }
    }
    //Return the result of the operation
    cout<< fResult<<endl;
    return fResult;
}

/*
-->Test Cases
#1  Calculator(7,3,'d')= 2.33
#2  Calculator(-7,3,'m')= -21
#3  Calculator(7,-3,'s')= 10
#4  Calculator(-7,3,'a')= -4
*/

    /*
     Analysis
     Input: 3 float numbers
     Process: Compare the three integers
     Output: Returns the biggest numbers
     
     biggestNumber
     Function that requests the user for the numbers and compares them to get the biggest value.
     Parameters: Number1, Number2, Number3 (all integers)
     Returns: iBiggestNumber(integer number), result of the comparison between three numbers.
 
     */

//Enter the variables in the parameters
void biggestandlowestNumber(int iNumber1,int iNumber2,int iNumber3, int iBiggestNumber,int iSmallestNumber)

{
    srand(time(0));
    iNumber2= rand();
    iNumber1 rand();
    iNumber3= rand();
  //Compare the numbers and if the first number is bigger than the second and third
    if (iNumber1 > iNumber2 && iNumber1 > iNumber3)
    {
        iBiggestNumber = iNumber1;
        iLowestNumber = iNumber3;
    }
    else
    {
        //Compare the numbers and if the third number is bigger than the second and first
        if (iNumber3 > iNumber2 && iNumber3>iNumber1)
        {
            iBiggestNumber = iNumber3;
         iLowestNumber = iNumber1;
        }
        //If any of the previous conditions are approved then the biggest number is the second
        else
            if (iNumber2 > iNumber1 && iNumber3>iNumber2)
                {
                
                }
        
        
    //Return the result of the comparison
    cout<< iBiggestNumber<<"and"<< iLowestNumber;
    
}
/*
 -->Test Cases
 #1  iBiggestNumber(7,3,234)= 234
 #2  iBiggestNumber(-7,3,234)= 234
 #3  iBiggestNumber(7,-3,-3234)= 7
 #4  iBiggestNumber(-7,3,3243)= 3243
    */

/*
 Analysis
 Input: 1 integer number
 Process: If the modulus by 2 is 0 then the number is even
 Output: Returns the biggest numbers
 
 isEven
 Function that requests the user for a number and calulates if it is even
 Parameters: iNumber(integer Number)
 Returns: bEvenNumber(bool), result of deciding an even number.
*/
//Enter the variables in the parameters
bool isEven(int iNumber)
{
        bool bEvenNumber;
    //Divide the number by two and have the modulus
        if (iNumber % 2 == 0)
    //If modulus 0 then the result is true
            bEvenNumber = true;
    //If modulus different than 0 then the result is false
        else bEvenNumber = false;
    //Return the result, which is either true or false
    cout<<bEvenNumber<<endl;
    
        return bEvenNumber;
    
}
/*
-->Test Cases
#1  isEven(20)= 1
#2  isEven(13)= 0
#3  isEven(7)= 0
#4  isEven(-20)= 1
*/

/*
 Analysis
 Input: An integer number
 Process: Define if the integer is a multiple of 5 and an odd number
 Output: Returns 1 if the integer is a multiple of 5 and an odd number, else is 0.
 
 isOddAndMultipleOfFive
 Function that requests the user for a number and calulates if it is even
 Parameters: iNumber(integer Number)
 Returns: bMultipleofFiveOdd(bool), result of deciding an odd number and .
 */
//Enter the variables in the parameters
bool isOddAndMultipleOfFive(int iNumber)

{
    bool bMultipleofFiveOdd;
    // Calculate the modulus if is multiple of 5 and not even if divided by 2
    if ((iNumber % 5 == 0) && !(iNumber % 2 == 0))
        //If modulus 0 and not modulus = 0 then the result is true
        bMultipleofFiveOdd = true;
    //If both conditions are not fulfilled then it is false
    else bMultipleofFiveOdd = false;
     //Return the result, which is either true or false
    cout<< bMultipleofFiveOdd<<endl;
    
    return bMultipleofFiveOdd;
    
}
/*
-->Test Cases
#1  bMultipleofFiveOdd(20)= 0
#2  bMultipleofFiveOdd(25)= 1
#3  bMultipleofFiveOdd(7)= 0
#4  bMultipleofFiveOdd(-20)= 0
*/

/*
 Analysis
 Input: 1 integer number
 Process: Define the number
 Output: Returns the biggest numbers
 
 isEven
 Function that requests the user for a number and calulates if it is even
 Parameters: iNumber(integer Number)
 Returns: bEvenNumber(bool), result of deciding an even number.
*/
//Enter the variables in the parameters
int daysInTheMonth(int iNumber1)
{
    int iMaxDays;
    //If the number is 1,3,5,7,8,10,12 which are the months that have 31 days
    if (iNumber1 == 1||iNumber1 ==3||iNumber1 ==5||iNumber1 ==7||iNumber1 ==8||iNumber1 ==10||iNumber1 ==12)
        
        iMaxDays = 31;
    
    else
        
    {
     //If the number is 4,6,9,11 which are the months that have 30 days
        if (iNumber1 == 4||iNumber1 ==6||iNumber1 ==9||iNumber1 ==11)
            
            iMaxDays = 30;
        //Else another month,which is february the result is 28
        else iMaxDays = 28;
        
    }
    //Return the result of the maximum number of days
    cout<<iMaxDays<<endl;
    return iMaxDays;
    
}
/*
-->Test Cases
#1  daysInTheMonth(1)= 31
#2  daysInTheMonth(12)= 31
#3  daysInTheMonth(2)= 28
#4  daysInTheMonth(4)= 30
*/


int main() {
    return 0;
}

