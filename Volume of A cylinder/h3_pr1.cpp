// Erick Francisco González Martínez
// September, 2017
// Volume of a Cylinder
// hw3_pr1.cpp
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>
#include <cmath>
using namespace std;
/*
 getHeight
 Function that requests the user for the height.
 Parameters: none
 Returns: fMyHeight(floating point number) to be calculated in the volume.
 */
float getHeight()
{
    float fMyHeight;
    cout << "Please enter the height of the cylinder (enter decimals if necessary)" <<endl;
    cin >> fMyHeight;
    return fMyHeight;
}
/*
 getRadius
 Function that requests the user for the base.
 Parameters: none
 Returns: fMyRadius(floating point number) to be calculated in the volume.
 */
float getRadius()
{
    float fMyRadius;
    cout << "Please enter the radius of the cylinder (enter decimals if necessary)" <<endl;
    cin >> fMyRadius;
    return fMyRadius;

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
    fMyVolume = fTheirHeight*pow(fTheirRadius,2)*3.14;
    return fMyVolume;
}
/*
 showResult
 This function will display the resulting volume onto the screen.
 Parameters: show the volume (floating point number), result from the calculation
 Returns: nothing
 */
void showResult(float fMyVolume){
    
 cout<< "The volume of the cylinder is ";
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
    float fVolume,fHeight,fRadius;
     //Second Section: input function requesting height and radius to user
    fHeight = getHeight();
    fRadius = getRadius();
    //Third Section: Process data into information
    fVolume = calculateVolume(fHeight,fRadius);
    //Fourth Section: provide results to the user
    showResult(fVolume);
    return 0;
}


/* Analysis
 Input: (fRadius, positive), (fHeight, positive)
 Process: fVolumeoftheCylinder = 3.14* fHeight *(fRadius)^2
 Output: fVolumeofthe Cylinder
*/

/* Design
                                Process "Volume_of_Cylinder"
 Input
 
    Write "Please enter the radius of the cylinder (enter decimals if necessary)"
    Read fRadius
    Write "Please enter the height of the cylinder (enter decimals if necessary)"
    Read fHeight
 
 Process
    fVolumeoftheCylinder <- fHeight*(fRadius^2)*3.14
 
 Output
    Write "The volume of the cylinder is " fVolumeoftheCylinder " cubic units"
 
 EndProcess
 */
/* Test Cases
 #1 Height: 2 Radius: 2 Volume:25.12 Return: 0
 #2 Height: 3456 Radius: 7890 Volume: 6.7555e+110 Return: 0
 #3 Height: .000001 Radius: 0.00001 Volume: 3.14e-18 Return: 0
 */
