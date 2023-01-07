#include "Header.h"
#include <iostream>

//Remember that Combinatorics function can be calculated with the Pascal Triangle
//Combinatorics function: combine n elements in groups of r

int Functions::fatorial(int x)
{
	if (x <= 1)
		return 1;
	return x * fatorial(x - 1);
}

int Functions::nCr(int n, int r)
{
	if (r == 0)
		return 1;

	return fatorial(n) / (fatorial(n - r) * fatorial(r));
	
}

int Functions::PascalTr_nCr(int n, int r)
{
	if (n == r || r == 0 )
		return 1;
	return PascalTr_nCr(n - 1, r - 1) + PascalTr_nCr(n - 1, r);
}
