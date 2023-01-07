#include "Header.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	ArraysAbout c;
	c.declareArr();

	printf("\n\nDeclaring an array on Heap Memory!\n");

	c.arrHeap();

	printf("\n\nFunction which increased the size of the array\n");
	fIncreaseA();

	return 0;
}