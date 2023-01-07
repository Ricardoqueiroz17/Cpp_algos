#include <iostream>
#include "arrayhw.h" //THe "" means that the program will look through this folder only. Its different from <> which looks into the entire syst
#include <cstdlib>
using namespace std;

/* Fills array with random variables
Precondition :
a is a reference to a integer array
size is the array length

Postcondition :
Elements in the range : [0, size - 1]
are overwritten with random variables.
*/

void fillArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand();
	}
}

/*Print array values
	Precondition:
		a is a reference to an integer array
		n is the array length
	Postcondition:
		elements with index 0 to n-1 are written to the standard output stream.
*/
void printArray(const int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}

double e(int x, int n)
{
	static double p = 1, f = 1;
	double r;

	if (n == 0)
		return 1;
	r = e(x, n - 1);
	p = p * x;
	f = f * n;

	return r + p / f;
}


