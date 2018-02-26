#include <iostream>
#include <string>

using namespace std;

//Function to get the string to analyze
string getString()
{
    string sInputString;
    cin >> sInputString;
    return sInputString;
}
/*
 --------------------------------------------------
 THE FOLLOWING FUNCTIONS DETERMINE POSITIONS OF LETTERS
 --------------------------------------------------
 */
//Function to determine the position of B
int calculateBPosition(string sInputString)
{
    int iLocation;
    iLocation = sInputString.find_first_of('B');
    return iLocation;
}

//Function to determine the position of F
int calculateFPosition(string sInputString)
{
    int iLocation;
    iLocation = sInputString.find_first_of('F');
    return iLocation;
}

//Function to determine the position of T
int calculateTPosition(string sInputString)
{
    int iLocation;
    iLocation = sInputString.find_first_of('T');
    return iLocation;
}

//Function to determine the position of L
int calculateLPosition(string sInputString)
{
    int iLocation;
    iLocation = sInputString.find_first_of('L');
    return iLocation;
}

//Function to determine the position of C
int calculateCPosition(string sInputString)
{
    int iLocation;
    iLocation = sInputString.find_first_of('C');
    return iLocation;
}

/*
 --------------------------------------------------
 THE FOLLOWING FUNCTIONS PRINT LETTERS GIVEN THE LETTER IS NOT FOUND
 --------------------------------------------------
 */

//Function to print C if there is no C
bool evaluateToPrintC(int iCPosition)
{
    char cPrintC;
    if (iCPosition < 0)
    {
        cPrintC = 'C';
        cout << cPrintC << endl;
        return true;
    }
    else
    {
        return false;
    }
}

//Function to print B if there is no B
bool evaluateToPrintB(int iBPosition)
{
    char cPrintB;
    if (iBPosition < 0)
    {
        cPrintB = 'B';
        cout << cPrintB << endl;
        return true;
    }
    else
    {
        return false;
    }
}

//Function to print T if there is no T
bool evaluateToPrintT(int iTPosition)
{
    char cPrintT;
    if (iTPosition < 0)
    {
        cPrintT = 'T';
        cout << cPrintT << endl;
        return true;
    }
    else
    {
        return false;
    }
}

//Function to print F if there is no F
bool evaluateToPrintF(int iFPosition)
{
    char cPrintF;
    if (iFPosition < 0)
    {
        cPrintF = 'F';
        cout << cPrintF << endl;
        return true;
    }
    else
    {
        return false;
    }
}

//Function to print L if there is no L
bool evaluateToPrintL(int iLPosition)
{
    char cPrintL;
    if (iLPosition < 0)
    {
        cPrintL = 'L';
        cout << cPrintL << endl;
        return true;
    }
    else
    {
        return false;
    }
}

/*
 ------------------------------------------------------------
 FUNCTION TO PRINT NO MISSING PARTS
 -----------------------------------------------------------
 */
void printNoMissing(bool B, bool C, bool F, bool T, bool L)
{
    if (!(B || C || F || L || T))
    {
        cout << "NO MISSING PARTS" << endl;
    }
}

/*
 -------------------------------------------------------
 MAIN FUNCTION
 -------------------------------------------------------
 */

int main()
{
    string sInput;
    int iBPosition, iCPosition, iFPosition, iLPosition, iTPosition;
    bool bPrintedB, bPrintedC, bPrintedT, bPrintedF, bPrintedL;
    
    sInput = getString();
    iBPosition = calculateBPosition(sInput);
    iCPosition = calculateCPosition(sInput);
    iFPosition = calculateFPosition(sInput);
    iLPosition = calculateLPosition(sInput);
    iTPosition = calculateTPosition(sInput);
    
    bPrintedB = evaluateToPrintB(iBPosition);
    bPrintedC = evaluateToPrintC(iCPosition);
    bPrintedF = evaluateToPrintF(iFPosition);
    bPrintedL = evaluateToPrintL(iLPosition);
    bPrintedT = evaluateToPrintT(iTPosition);
    
    printNoMissing(bPrintedB, bPrintedC, bPrintedF, bPrintedT, bPrintedL);
    
    return 0;
}

