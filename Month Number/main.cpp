// Erick Francisco González Martínez
// September, 2017
// Month Number
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>

using namespace std;

/*
 getMonth
 Function that requests the user for the month number.
 Parameters: none
 Returns: iMyMonth(integer positive number)
 */

int getMonth(){
    int iMyMonth;
    cout<<"Please provide the number of the month"<<endl;
    cin>>iMyMonth;
    return iMyMonth;
}

/*
 calculateDays
 Function that calculates the user for the month number.
 Parameters: iFinalNumber (integer positive number).
 Returns: iDays(integer positive number) number of days in the month.
 */
int calculateDays(int iFinalMonth){
    int iDays;
    /*
     
     */
    switch(iFinalMonth){
    default:
        iDays=30;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 9:
    case 12:
        iDays=31;
        break;
        
    case 2:
        iDays =29;
        break;
}
    return iDays;
}

/*
 displayDays
 This function will display the resulting number of days onto the screen.
 Parameters: iFinalMonth (integer positive), number of days
 Returns: nothing
 */
void displayDays(int iFinalMonth){
    cout<<iFinalMonth<<endl;
}
/*
 main
 This function calls the input, processing and output functions
 that together calculates the number of days for each month
 Parameters: none
 Returns: 0 (program is ok)
 */
    int main(){
        //First Section: declare and initialize Variables
        int iFinalMonth,iDays;
        //Second Section: input function requesting the number of the month
        iFinalMonth= getMonth();
        //Third Section: Process data into information
        iDays = calculateDays(iFinalMonth);
        //Fourth Section: provide results to the user
        displayDays(iDays);
        return 0;
        }

