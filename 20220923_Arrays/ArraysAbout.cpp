#include "Header.h"
#include <iostream>
#include <stdio.h>
using namespace std;

/*
Static arrays: cannot chance size
Dynamic arrays: can change size
*/

void ArraysAbout::declareArr()
{

	//Ways of declaring an array

	int A[5];
	A[0] = 1;
	A[1] = 2;
	A[2] = 126;

	int B[5] = { 1,2,3,4,5 };
	int C[5] = { 1,2 }; //Just the first two elements will be filled, the others will be 0
	int D[5] = { 0 }; //5 elements as 0
	int E[] = { 1,2,3,4,5,6 }; //The array will have 6 elements

	//Ways of printing the elements of an array:

	for (int i = 0; i < 5; i++)
		printf("%d\n", A[i]);
	printf("\n\nSecond way of printing an array (using pointer)\n");
	for (int i = 0; i < 5; i++)
		printf("%d\n", *(E + i));
}

void ArraysAbout::arrHeap()
{
	int A[5] = { 2,4,6,8,10 }; //This is the normal way of declaring and array
	
	//However, if I want to declare in Heap memory (which permits dynamically change the size)

	int* p;
	p = (int*)malloc(5 * sizeof(int));
	p[0] = 3;
	p[1] = 5;
	p[2] = 7;
	p[3] = 9;
	p[4] = 11;

	for (int i = 0; i < 5; i++)
		printf("%d", p[i]);
}