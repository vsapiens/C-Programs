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

void flipHorizontal( int &iArrCol,int &iArrRow, int iMatValues[20][20])
{
        int iRowIndex,iColIndex;
        
        for ( iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++)
        {
            
            for( iColIndex = 0; iColIndex < iArrCol; iColIndex++)
            {
                cout<< iMatValues[iRowIndex][iColIndex]<< " ";
            }
        }
}

/*
 printData
 This function displays the sum of the matrix
 Parameters: Receives the sum of the matrix
 Returns: nothing
 */
void displayDataOriginal( int &iArrCol,int &iArrRow, int iMatValues[20][20]) {
    int iRowIndex,iColIndex;
     cout<<"Original"<<endl;
    for (iColIndex = 0; iColIndex < iArrCol; iColIndex++)
         //iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++ )
    {
        
        for(iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++ )
        {
          cout<< iMatValues[iColIndex][iRowIndex]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void displayDataVertical( int &iArrCol,int &iArrRow, int iMatValues[20][20]) {
    int iRowIndex,iColIndex;
     cout<<"Vertical"<<endl;
    for (iRowIndex = iArrRow-1; iRowIndex >= 0; iRowIndex-- )
    {
        
        for(iColIndex = 0; iColIndex < iArrCol; iColIndex++)
        {
            cout<< iMatValues[iRowIndex][iColIndex]<< " ";
        }
        cout<<endl;
        
    }
    cout<<endl;
}
void displayDataHorizontal( int &iArrCol,int &iArrRow, int iMatValues[20][20]) {
    int iRowIndex,iColIndex;
    cout<<"Horizontal"<<endl;
    for (iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++)
    {
        
        for(iColIndex = iArrCol-1; iColIndex >= 0; iColIndex--)
        {
            cout<< iMatValues[iRowIndex][iColIndex]<< " ";
        }
        cout<<endl;
        
    }
    cout<<endl;
}

void displayDataRight( int &iArrCol,int &iArrRow, int iMatValues[20][20]) {
    int iRowIndex,iColIndex;
    cout<<"Right"<<endl;
    for (iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++ )
    {
        
        for(iColIndex = iArrCol-1; iColIndex >= 0; iColIndex--)
        {
            cout<< iMatValues[iColIndex][iRowIndex]<< " ";
        }
        cout<<endl;
        
    }
    cout<<endl;
}

void displayDataLeft( int &iArrCol,int &iArrRow, int iMatValues[20][20]) {
    int iRowIndex,iColIndex;
    cout<<"Left"<<endl;
    for (iRowIndex = iArrRow-1; iRowIndex >= 0; iRowIndex--)
    {
        
        for(iColIndex = 0; iColIndex < iArrCol; iColIndex++)
        {
            cout<< iMatValues[iColIndex][iRowIndex]<< " ";
        }
        cout<<endl;
        
    }
    cout<<endl;
}
/*
 main
 This function calls the input, process and output functions
 Parameters: none
 Returns: 0 (program is ok)
 */
int main(){
    
    int iMatData [20] [20] , iCountRows , iCountCol;
    readData( iCountCol, iCountRows, iMatData);
  //  flipHorizontal(iCountCol, iCountRows, iMatData)
    displayDataOriginal(iCountCol, iCountRows, iMatData);
    displayDataVertical(iCountCol, iCountRows, iMatData);
    displayDataHorizontal(iCountCol, iCountRows, iMatData);
    displayDataRight(iCountCol, iCountRows, iMatData);
    displayDataLeft(iCountCol, iCountRows, iMatData);
    // printData( iSum );
    
    return 0;
}

