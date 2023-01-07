#include "header.h"
#include <iostream>
using namespace std;

double Taylor::eHorner(int x, int n)
{
	int denom = 1;
	static double S = 1;

	if(n==0)
		return S;
	S = 1+ x*S/n;
	return eHorner(x, n - 1);

}