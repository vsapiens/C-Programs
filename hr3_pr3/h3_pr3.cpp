// Erick Francisco González Martínez
// September, 2017
// Distance
// h3_pr3.cpp
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>
#include <cmath>

using namespace std;
/*
 getTime
 Function that requests the user for the time.
 Parameters: none
 Returns: fMyTime(floating point number) to be calculated in the distance formula.
 */
float getTime()

{
    float fMyTime;

    cout << "Please enter the Time in seconds (enter decimals if necessary)" <<endl;
    cin >> fMyTime;
    
    return fMyTime;
}
/*
 getSpeed
 Function that requests the user for the speed in meters per second.
 Parameters: none
 Returns: fMySpeed(floating point number) to be calculated in the distance formula.
 */
float getSpeed()
{
    float fMySpeed;
    cout << "Please enter the Speed in meters per second (enter decimals if necessary)" <<endl;\
    cin >> fMySpeed;
    return fMySpeed;
    
}
/*
 calculateDistance
 This function calculate the total distance travelled.
 Parameters: fTheirTime (floating point number) and fTheirSpeed to calculate the volume.
 Returns: the distance calculated from muliplying both numbers
 */
float calculateDistance(float fTheirTime,float fTheirSpeed)

{
    float fMyDistance;
    
    fMyDistance = fTheirTime * fTheirSpeed;
    
    return fMyDistance;
}
/*
 showResult
 This function will display the resulting distance onto the screen.
 Parameters: show the distance (floating point number), result from the calculation
 Returns: nothing
 */
void showResult(float fMyDistance){
    
    cout<< "The total distance travelled is  ";
    cout<< fMyDistance;
    cout<< " meters"<<endl;
}
/*
 main
 This function calls the input, processing and output functions
 that together calculates the distance from the speed and the time
 Parameters: none
 Returns: 0 (program is ok)
 */
int main() {
    //First Section: declare and initialize Variables
    float fTotalDistance,fSpeed,fTime;
    //Second Section: input function requesting speed and time to user
    fSpeed = getSpeed();
    fTime = getTime();
    //Third Section: Process data into information
    fTotalDistance= calculateDistance(fSpeed,fTime);
    //Fourth Section: provide results to the user
    showResult(fTotalDistance);
    return 0;
}


/* 
 --->Analysis
 Input: (fSpeed, positive), (fTime, positive)
 Process: fDistance = fTime * fSpeed
 Output: fDistance
 


 --->Design
 Process "Speed"
 
 ->Input
 
 Write "Please enter the Speed in meters per second (enter decimals if necessary)"
 Read fSpeed
 Write "Please enter the Time in seconds (enter decimals if necessary)"
 Read fTime
 
 ->Process
 
 fDistance <- fTime * fSpeed
 
 ->Output
 
 Write "The Distance of the cylinder is " fDistance " cubic units"
 
 EndProcess
 */
/* Test Cases
 #1 Speed: 2 Time: 2 Distance:4 Return: 0
 #2 Speed: 2000 Time: 2000 Distance: 4e+06 Return: 0
 #3 Speed: 0.2222 Time: 0.2222 Distance:0.0493728 Return: 0
 */
