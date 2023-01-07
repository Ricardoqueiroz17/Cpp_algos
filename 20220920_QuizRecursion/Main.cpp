#include <iostream>
#include <stdio.h>
using namespace std;

void foo(int n, int sum)
{
	int k = 0, j = 0;
	if (n == 0) return;
	k = n % 10;
	j = n / 10;
	sum = sum + k;
	foo(j, sum);
	printf("%d", k);
}

int f(int& x, int c)
{
	c = c - 1;
	if (c == 0) return 1;
	x = x + 1;
	return f(x, c) * x;
}
int main()
{
	int a = 2048, sum = 0;
	foo(a, sum);
	printf("%d", sum);
	
	printf("\nFunction 2\n");
	int p = 5;
	printf("%d", f(p, p));

	return 0;

}
