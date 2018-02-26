// Erick Francisco González Martínez
// September, 2017
// Volume of a Cone
// h3_pr2.cpp
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>
using namespace std;
/*
 getRadius
 Function that requests the user for the height.
 Parameters: none
 Returns: fMyRadius(floating point number) to be calculated in the volume.
 */
float getRadius()
{
    float fMyRadius;
    cout << "Please enter the radius of the cone (enter decimals if necessary)" <<endl;
    cin >> fMyRadius;
    return fMyRadius;
}
/*
 getHeight
 Function that requests the user for the height.
 Parameters: none
 Returns: fMyHeight(floating point number) to be calculated in the volume.
 */
float getHeight()
{
    float fMyHeight;
cout << "Please enter the height of the cone (enter decimals if necessary)" <<endl;
cin >> fMyHeight;
    return fMyHeight;
    }
/*
 calculateVolume
 This function calculate the volume.
 Parameters: fTheirHeight (floating point number) and fTheirRadius to calculate the volume.
 Returns: the volume calculated from muliplying both numbers
 */
float calculateVolume(float fTheirHeight,float fTheirRadius)
{
    float fMyVolume;
    fMyVolume = (fTheirHeight*fTheirRadius*fTheirRadius*3.14)/3;
    return fMyVolume;
}
/*
 showVolume
 This function will display the resulting volume onto the screen.
 Parameters: show the volume (floating point number), result from the calculation
 Returns: nothing
 */
void showVolume(float fMyVolume){
    
    cout<< "The volume of the cone is ";
    cout<< fMyVolume;
    cout<< " cubic units."<<endl;
}
/*
 main
 This function calls the input, processing and output functions
 that together calculates the volume from the radius and the height
 Parameters: none
 Returns: 0 (program is ok)
 */
int main() {
    //First Section: declare and initialize Variables
    float fVolume,fRadius,fHeight;
    //Second Section: input function requesting height and radius to user
    fHeight = getHeight();
    fRadius = getRadius();
    //Third Section: Process data into information
    fVolume = calculateVolume(fHeight,fRadius);
    
    showVolume(fVolume);
    return 0;
}


/* Analysis
 Input: (fRadius, positive), (fHeight, positive)
 Process: fVolumeofthecone = 3.14* fHeight *(fRadius)^2
 Output: fVolumeofthe cone
 */


/* Design
 Process "Volume_of_cone"
 Input
 
 Write "Please enter the radius of the cone (enter decimals if necessary)"
 Read fRadius
 Write "Please enter the height of the cone (enter decimals if necessary)"
 Read fHeight
 
 Process
 fVolumeofthecone <- fHeight*(fRadius^2)*3.14
 
 Output
 Write "The volume of the cone is " fVolumeofthecone " cubic units"
 
 EndProcess
 */

/* Test Cases
#1 Height: 2 Radius: 2 Volume:8.37333 Return: 0
#2 Height: 3456 Radius: 7890 Volume: 2.25 e+11 Return: 0
#3 Height: .000001 Radius: 0.00001 Volume: 1.04667e-16 Return: 0 
 */
