#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void funA(int n);
void funB(int n);
int nestR(int n);

int main()
{
	int nestNumb = 200;
	int nestResult;
	funA(20);
	printf("\n\nFunction 02: Nested Recursion.\n\n");
	nestResult = nestR(nestNumb);
	printf("Result of n %d = %d\n", nestNumb, nestResult);
	
	return 0;
}

void funA(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		funB(n-1);
	}
}

void funB(int n)
{
	if (n > 1)
	{
		printf("%d ", n);
		funA(n/2);
	}
}

int nestR(int n)
{
	if (n > 100)
	{
		return n - 10;
	}

	return nestR(nestR(n + 11));
}