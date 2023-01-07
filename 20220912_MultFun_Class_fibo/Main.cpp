#include "Header.h"
#include <iostream>
using namespace std;


int main() {
	int res;
	int n = 5;
	Fibo f;

	int i;
	for (i = 0; i < 10; i++)
		F[i] = -1;

	cout << F[9] << endl;

	printf("\nMemoization Fibo: %d\n\n", f.mFib(n));

	printf("\nClass function: recursive Fibonacci\n");
	res = f.recursFibo(n);
	printf("%d\n", res);

	printf("\n\nClass function 2: fibo using loop\n");
	res = f.FiboIter(n);
	printf("%d\n", res);

	return 0;
}