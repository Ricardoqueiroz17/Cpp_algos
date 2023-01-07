#include <iostream>
#include "arrayhw.h"
using namespace std;

int main(void)
{
	const int CSIZE = 10;
	int myarray[CSIZE];
	int x = 2;
	int n = 4;

	fillArray(myarray, CSIZE);
	printArray(myarray, CSIZE);
	printf("\n\n");
	double res = e(x, n);
	printf("%lf", res);
	return 0;
}