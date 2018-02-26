// Erick Francisco González Martínez
// September, 2017
// September Day
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>

using namespace std;

/*
 getDay
 Function that requests the user for number of the month of September
 Parameters: none
 Returns: cMyDay(int positive number) a day of September
 */

int getDay(){
    int cMyDay;
    cin>> cMyDay;
    return  cMyDay;
}

/*
 verifyDays
 Function that identifies the days in september and classifies them
 Parameters: iInputDay (character) that is obtained from the user.
 Returns: iNumber(character) the final character
 */
int verifyDays(int iInputDay){
    int iNumber;
    switch(iInputDay){
        default:
            iNumber= '!';
            break;
        case 1:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
            iNumber = 'c';
            break;
        case 2:
        case 3:
        case 9:
        case 10:
        case 16:
        case 17:
        case 23:
        case 24:
        case 30:
            iNumber = 'w';
            break;
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            iNumber = 'i';
            break;
    }
    return iNumber;
}

/*
 displayResult
 This function will display the resulting expression from the character
 Parameters: iNumber(character), the result number given
 Returns: nothing
 */
void displayResult(char iNumber){
    cout<<iNumber<<endl;
}
/*
 main
 This function calls the input, processing and output functions
 that together display a special character for each day: either iweek, class day, week day
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    //First Section: declare and initialize Variables
    char iInputDay,cResultChar;
    //Second Section: input function requesting the number of the month
    iInputDay= getDay();
    //Third Section: Process data into information
    cResultChar = verifyDays(iInputDay);
    //Fourth Section: provide results to the user
    displayResult(cResultChar);
    return 0;
}


