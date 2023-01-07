#include "Header.h"
#include <stdio.h>
#include <iostream>
using namespace std;

/*How to increase the size of a dynamic array*/

void fIncreaseA()
{
	int* p, * q;
	p = (int*)malloc(5 * sizeof(int));
	p[0] = 1; p[1] = 3;	p[2] = 5; p[3] = 7; p[4] = 9;

	printf("\nElements of p (smaller arr):\n");
	for (int i = 0; i < 5; i++)
		printf("%d \n", p[i]);
	 
	q = (int*)malloc(10 * sizeof(int));

	printf("\nElements of q (larger arr):\n");
	for(int j=0;j<5;j++)
	{
		q[j] = p[j];
		printf("%d\n", q[j]);
	}

	printf("\nNow, we are going to change p for the larger array q\n");

	free(p);
	p = q;
	q = NULL;

	for (int i = 0; i < 5; i++)
		printf("%d\n", p[i]);

}