/* Erick Francisco González Martínez
 October, 2017
 CwMatrix01
 Programming Fundamentals (Ago 17 Gpo 10)
 version 1.0
 */

#include <iostream>
using namespace std;

/*
 readData
 This function creates a matrix with a maximum of 20 rows and 20 columns
 Parameters: The array receives the total columns and rows with its respective matrix values given by the user
 Returns: nothing
 */

void readData( int &iArrCol,int &iArrRow, int iMatValues[20][20])
{
    cin >> iArrRow >> iArrCol;
    
    int iRowIndex,iColIndex;
    
    for ( iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++ )
    {
        
        for( iColIndex = 0; iColIndex < iArrCol; iColIndex++)
        {
            cin>>iMatValues[iRowIndex][iColIndex];
        }
        
    }
}


/*
 calculateData
 This function calculates the sum from all the matrix
 Parameters: The function reads and adds the stored data in the matrix defined above
 Returns: The the sum from the matrix
 */

int calculateData( int &iArrCol,int &iArrRow, int iMatValues[20][20])
{
    int iRowIndex,iColIndex,iSum=0;
        
        for ( iRowIndex = 0,iSum=0; iRowIndex < iArrRow; iRowIndex++ )
        {
            
            for( iColIndex = 0; iColIndex < iArrCol; iColIndex++)
            {
                iSum += iMatValues[iRowIndex][iColIndex];
            }
            
    }
    return iSum;
}
/*
 printData
 This function displays the sum of the matrix
 Parameters: Receives the sum of the matrix
 Returns: nothing
 */
void printData(int iSum)
{
    cout << iSum << endl;
}

/*
 main
 This function calls the input, process and output functions
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    
    int iMatData [20] [20] , iCountRows , iCountCol , iSum;
    
    readData( iCountCol, iCountRows, iMatData);
    
    iSum = calculateData( iCountCol, iCountRows, iMatData);
    
    printData( iSum );
    
    return 0;
}
