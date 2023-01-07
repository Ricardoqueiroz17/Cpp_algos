#include "Header.h"
#include <iostream>
#include <stdio.h>
using namespace std;

/* Building 2D arrays 
There are 3 different types of declaring 2d arrays: it can be declared in Heap memory or in Stack
*/

int twoDarray::fun2D()
{
	//======================================================================================================================
	//First method of declaring an 2d array: most simple - declaring in Stack
	int A[3][4] = {{1,2,3,4},{4,5,6,7},{12,19,23,67}};
	
	//Printing the output
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	printf("\n");

	//======================================================================================================================
	//Second method: declaring on Heap with a single pointer
	int* B[3];
	B[0] = (int*)malloc(4 * sizeof(int));
	B[1] = (int*)malloc(4 * sizeof(int));
	B[2] = (int*)malloc(4 * sizeof(int));

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", B[i][j]);
		printf("\n");
	}
	printf("\n");

	//======================================================================================================================
	//Third method: declaring with double pointer

	int** C;
	C = (int**)malloc(3 * sizeof(int*));
	C[0] = (int*)malloc(4 * sizeof(int));
	C[1] = (int*)malloc(4 * sizeof(int));
	C[2] = (int*)malloc(4 * sizeof(int));

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}
	printf("\n");

	return 0;
}