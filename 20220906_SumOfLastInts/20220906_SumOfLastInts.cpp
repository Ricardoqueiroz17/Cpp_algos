#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int fun(int n);
int funloop(int n);
int factorial(int n);
int factloop(int n);

int main()
{
	int res, resloop;
	int resfact, resfactloop;
	int numb = 15;
	res = fun(numb);
	printf("\n\nIn the first function we use recursion\n");
	printf("\nSum of integers until %d = %d\n", numb, res);
	
	printf("\n\n Now, the same function, but with Loop and not recursion\n");
	resloop = funloop(numb);
	printf("\nSum of integers until %d = %d\n", numb, resloop);

	resfact = factorial(numb);
	printf("\n\nFACTORIAL of a number using recursion\n");
	printf("\nFactorial of %d = %d\n", numb, resfact);

	resfactloop = factloop(numb);
	printf("\n\nFACTORIAL of a number using loop\n");
	printf("\nFactorial of %d = %d\n", numb, resfactloop);

	return 0;
}

int fun(int n)
{
	if (n == 1)
		return 1;

	return fun(n - 1) + n;
}

int funloop(int n)
{
	int i, sum=0;
	for (i = 0; i <= n; i++)
	{
		sum = sum + i;
	}
	return sum;
}

int factorial(int n)
{
	if(n==0)
		return 1; /*Remember that 0! = 1   */
	else
		return factorial(n - 1) * n;
}

int factloop(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}