/*
 Erick Francisco González Martínez
 
 A01039859
 
 November,2017
 
 Programming Fundamentals
 
 MatrixHw01.cpp
 
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

void getData(int &iDimension,int iMatVal[10][10])
{
	int iColIndex=0, iRowIndex=0;
	
	cin>> iDimension;
	// Loop that changes the display of the matrix into a VERTICAL one
	for (iRowIndex = iDimension-1 ; iRowIndex >= 0 ; iRowIndex--)
		
	{
		
		for(iColIndex = 0; iColIndex  < iDimension ; iColIndex++)
			
		{
			
			cin >> iMatVal[iRowIndex][iColIndex];
			
		}
		
	}
}
/*
 displayMatrix
 This function receives the input of the matrix with its proper dimension but it modifies the matrix into a horizontal matrix
 Parameters: The dimension that will be defined in the function and a multidimensional array with a defined dimension.
 Returns: nothing
 */

void displayMatrix(int iDimension,int iMatVal[10][10])
{
	int iColIndex=0, iRowIndex=0;
	
	// Loop that changes the display of the matrix into an HORIZONTAL one
	
	for (iRowIndex = 0 ; iRowIndex < iDimension ; iRowIndex++ )
		
	{
		
		for(iColIndex = iDimension-1; iColIndex  >= 0 ; iColIndex--)
			
		{
			
			cout << iMatVal[iRowIndex][iColIndex];
			
		}
		
		cout<<endl;
	}
}

/*
 main
 This function calls the input and output
 Parameters: none
 Returns: 0 if the program was compiled and fully executed
 */

int main()
{
	int iDimension=0, iMatrix [10] [10];
	
	getData(iDimension, iMatrix);
	
	displayMatrix(iDimension, iMatrix);
	
	return 0;
}

