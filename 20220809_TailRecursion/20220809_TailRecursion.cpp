#include <iostream>
#include <stdio.h>
using namespace std;

void headRec(int n);

int main()
{
	headRec(3);
	return 0;
}

void headRec(int n)
{
	if (n > 0)
	{
		//printf("%d", n); //If we have this statement instead of the one below, it would be a tail recursion (the recursion call is in "tail" of the function
		headRec(n - 1);
		printf("%d", n);
	}
}