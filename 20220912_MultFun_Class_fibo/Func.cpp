#include "Header.h"
#include <iostream>
using namespace std;

int F[10];

int Fibo::mFib(int n)
{
	if (n < 2)
	{
		F[n] = n;
		return n;
	}
	else
	{
		if (F[n - 2] == -1)
			F[n - 2] = mFib(n - 2);

		if (F[n - 1] == -1)
			F[n - 1] = mFib(n - 1);

		return mFib(n - 2) + mFib(n - 1);
	}
}



int Fibo::recursFibo(int n)
{
	if (n < 2)
		return n;

	return recursFibo(n - 1) + recursFibo(n - 2);
}

int Fibo::FiboIter(int n)
{
	int t0 = 0;
	int t1 = 1;
	int s;

	if (n < 2)
		return n;

	for (int i = 2; i <= n; i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}
