
/*
 Erick Francisco González Martínez
 
 A01039859
 
 November,2017
 
 Programming Fundamentals
 
 MatrixHw02.cpp
 
 version 1.0
 
 */

#include <iostream>

using namespace std;
/*
 getData
 This function receives the input of the matrix with its proper dimension
 Parameters: The dimension that will be defined in the function and a multidimensional array with a defined dimension.
 Returns: nothing
 */

void getData(int &iArrRow,int &iArrCol, int iMatInput[10][10])
{
	int iColIndex, iRowIndex;
	
	cin>> iArrRow>> iArrCol;
	
	for (iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++ )
	{
		
		for(iColIndex = 0; iColIndex < iArrCol; iColIndex++)
			
		{
			
			cin >> iMatInput[iRowIndex][iColIndex];
		}
		
	}
}

int calculateSum(int iArrRow,int iArrCol,int iMatProcess[10][10])
{
	int iSumTotal=0, iSumInner=0, iSumOuter=0,iColIndex, iRowIndex;
	
	for (iRowIndex = 0; iRowIndex < iArrRow; iRowIndex++ )
	{
		
		for(iColIndex = 0; iColIndex < iArrCol; iColIndex++)
		{
			
			 iSumTotal += iMatProcess[iRowIndex][iColIndex];
		}
		
	}
	
	if (iArrCol >= 2 && iArrRow >= 2)
	{
		for (iRowIndex = 1; iRowIndex < iArrRow-1; iRowIndex++ )
		{
		
			for(iColIndex = 1; iColIndex < iArrCol-1; iColIndex++)
			{
			
			iSumInner += iMatProcess[iRowIndex][iColIndex];
			}
		
		}
		
	}
	
	iSumOuter = iSumTotal - iSumInner;
	
	return iSumOuter;
}



void displayData(int iSumOuter)
{
	cout<< iSumOuter <<endl;
}

/*
 main
 This function calls the input and output
 Parameters: none
 Returns: 0 if the program was compiled and fully executed
 */
int main()
{
	int iMatrix [10] [10],iArrRow, iArrCol,iSumOuter;
	
	getData(iArrRow, iArrCol, iMatrix);
	
	iSumOuter = calculateSum(iArrRow, iArrCol, iMatrix);
	
	displayData(iSumOuter);
	
	return 0;
}
