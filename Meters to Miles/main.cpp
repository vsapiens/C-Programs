
// Erick Francisco González Martínez
// 1-09-2017
// Programming Fundamentals (Ago 17 Gpo 10)
//  version 1.0


#include<iostream>
using namespace std;
int main() {
    
    double dMeters;
    double dMiles;
    
    // Input
    cout << "Please enter the miles in postive numbers (use decimals if necessary)" << endl;
    cin >> dMiles;
    // Process
    dMeters = dMiles*1609.34;
    // Output
    cout << dMiles << " miles are approximately " << dMeters << " meters" << endl;
    return 0;
}
/* Analysis
 pInput:The number of miles in a postivie value
 process:For every mile convert it from 1 mile = 1609.43
 Output:Express total number of miles as a numerical value
 */
 /* Design
 Proceso calculateMilestoMeters
	Input
	Escribir "Please enter the miles"
	Leer dMiles
	Process
	dMeters <- dMiles*1609.34
	Output
	Escribir dMiles " miles are approximately " dMeters " meters"
 FinProceso  */


 /* Test Cases
Input:The number of miles in a postivie value
Process:For every mile convert it from 1 mile = 1609.43
 Output:Express total number of miles as a numerical value
 
 */
