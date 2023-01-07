#include <stdio.h>
#include <iostream>
using namespace std;

void funASCEND(int n);
void funDESC(int n);

int main()
{
	int x = 5;
	funASCEND(x);
	printf("\n\nAnother function\n\n");
	funDESC(x);
	return 0;
};

void funASCEND(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		funASCEND(n - 1);
		
	};
}

void funDESC(int n)
{
	if (n > 0)
	{
		funDESC(n - 1);
		printf("%d\n", n);
	}
}
