/*
 Rectangle.cpp
 This program calculates the area of the rectangle
 By: Erick Gonzalez
 5/09/2017
 v 1.0
 */
#include <iostream>

using namespace std;

/*
 getHeight
 Function that requests the user for the height.
 Parameters: none
 Returns: fMyHeight(floating point number) to be calculated in the area.
 */
float getHeight()
{
    float fMyHeight;
    
    cout << "Please enter the height of your rectangle."<<endl;
    
    cin>> fMyHeight;
    
    return fMyHeight;
}

/*
 getBase
 Function that requests the user for the base.
 Parameters: none
 Returns: fMyBase(floating point number) to be calculated in the area.
 */

float getBase()
{
    float fMyBase;
    
    cout << "Please enter the base of your rectangle."<<endl;
    
    cin>> fMyBase;
    
    return fMyBase;
}
/*
 calculateArea
 This function calculate the area.
 Parameters: fBase (floating point number) and fHeight to calculate the area.
 Returns: the area calculated from muliplying both numbers
 */
float calculateArea(float fBase,float fHeight)
{
    float fOutArea;
    
    fOutArea= fBase * fHeight;
    
    return fOutArea;
}
/*
 showArea
 This function will display the resulting area onto the screen.
 Parameters: show the area (floating point number), result from the calculation
 Returns: nothing
 */
void showArea(float fShowArea){
    cout<< "The area of the rectangle is "<< fShowArea<< " square units"<< endl;
}
/*
 main
 This function calls the input, processing and output functions
 that together calculates the area from the base and the height
 Parameters: none
 Returns: 0 (program is ok)
 */
int main() {
    
   //First Section: declare and initialize Variables
    
    float fFinalBase, fFinalHeight, fArea;
    
    //Second Section: input function requesting height and base to user
    
    fFinalHeight = getHeight();
    
    fFinalBase = getBase();
    
    //Third Section: Process data into information
    
    fArea = calculateArea(fFinalBase, fFinalHeight);
    
    //Fourth Section: provide results to the user
    
    showArea(fArea);
    return 0;
    
}


/*Analysis=
 Input: base and height (positive numbers no decimals)
 Process: iTheArea = iBase * iHeight
 Output: Area (positive number, no decimal)
 */

//Design: cin >> iBase, iHeight;

/* Test Cases:
 if the base 1 is and the height 1 is  the area is: 1
 if the base is 546 and the height is 234 the area is: 127764
 
 */



