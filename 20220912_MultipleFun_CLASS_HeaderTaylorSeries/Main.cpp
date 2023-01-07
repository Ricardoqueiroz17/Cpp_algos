#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	int x = 1;
	int n = 10;

	double res;
	Taylor t; //Class instance definition

	printf("CLASS: Recursive Taylor normal way\n");
	double eRes = t.e(x, n);
	printf("%lf", eRes);

	printf("\n\nCLASS: Taylor with Horner rule\n");
	double hornerRes = t.eHorner(1, 10);
	printf("%lf", hornerRes);

	printf("\n\n Taylor calculation exp(x) using iterative (loop)\n");
	res = t.eIter(x, n);
	printf("%lf\n", res);

	printf("\n\n 2 iterative loop -> Taylor calculation exp(x) using iterative (loop)\n");
	res = t.eIter2(x, n);
	printf("%lf", res);

	
	

	return 0;
}