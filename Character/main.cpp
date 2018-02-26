// Erick Francisco González Martínez
// September, 2017
// Vowel/Consonant/Number
// Programming Fundamentals (Ago 17 Gpo 10)
// version 1.0

#include <iostream>

using namespace std;

/*
 getCharacter
 Function that requests the user for the character it wants to identify
 Parameters: none
 Returns: cMyChar(character) returns the input of the function
 */

char getCharacter(){
    char cMyChar;
    cin>>cMyChar;
    return cMyChar;
}

/*
 verifyCharacters
 Function that identifies
 Parameters: cInputChar (character) that is obtained from the user.
 Returns: cCharacter(character) the final character
 */
char verifyCharacters(char cInputChar){
    char cCharacter;
    switch(cInputChar){
        default:
            cCharacter= '!';
            break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cCharacter = 'a';
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            cCharacter = 'b';
            break;
    }
    return cCharacter;
}

/*
 displayResult
 This function will display the resulting number of days onto the screen.
 Parameters: iFinalMonth (integer positive), number of days
 Returns: nothing
 */
void displayResult(char cCharacter){
    cout<<cCharacter<<endl;
}
/*
 main
 This function calls the input, processing and output functions
 that together display a special character for each vowel, consonant or number
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    //First Section: declare and initialize Variables
    char cInputChar,cResultChar;
    //Second Section: input function requesting the number of the month
    cInputChar= getCharacter();
    //Third Section: Process data into information
    cResultChar = verifyCharacters(cInputChar);
    //Fourth Section: provide results to the user
    displayResult(cResultChar);
    return 0;
}

