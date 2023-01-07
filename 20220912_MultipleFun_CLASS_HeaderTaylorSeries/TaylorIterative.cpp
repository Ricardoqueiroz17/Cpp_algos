#include <iostream>
#include "header.h"
using namespace std;

double Taylor::eIter(int x, int n)
{
	double s = 1;

	for (; n > 0; n--)
	{
		s = 1 + x * s / n;
	}
	
	return s;
}

double Taylor::eIter2(int x, int n)
{
	double s = 1;
	double num = 1;
	int den = 1;

	for (int i = 1; i <= n; i++)
	{
		num *= x;
		den *= i;
		s += num / den;
	}
	return s;
}