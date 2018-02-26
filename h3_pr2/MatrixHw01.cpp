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

void getData(int &iDimension,int iMatInput[10][10])
{
	int iColIndex, iRowIndex;

	cin>> iDimension;
	
	for (iRowIndex = iDimension-1 ; iRowIndex >= 0 ; iRowIndex--)
		
	{
		
		for(iColIndex = iDimension-1; iColIndex  >= 0 ; iColIndex--)
			
		{
			
			cin >>  iMatOutput[iRowIndex][iColIndex];
			
		}
	
	}
}
/*
 displayMatrix
 This function receives the input of the matrix with its proper dimension but it modifies the matrix into a horizontal matrix
 Parameters: The dimension that will be defined in the function and a multidimensional array with a defined dimension.
 Returns: nothing
 */

void displayMatrix(int iDimension,int iMatOutput[10][10])
{
	int iColIndex, iRowIndex;
	
// Loop that changes the display of the matrix into an horizontal one
	for (iRowIndex = iDimension-1 ; iRowIndex >= 0 ; iRowIndex--)
		
	{
		
		for(iColIndex = iDimension-1; iColIndex  >= 0 ; iColIndex--)
			
		{
			
			cout << iMatOutput[iRowIndex][iColIndex];
			
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
	int iDimension, iMatrix [10] [10];
	
	getData(iDimension, iMatrix);
	
	displayMatrix(iDimension, iMatrix);
	
	return 0;
}
