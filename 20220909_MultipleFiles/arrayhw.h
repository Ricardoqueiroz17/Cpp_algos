#ifndef ARRAYHW_H_INCLUDED
#define ARRAYHW_H_INCLUDED

/* Fills array with random variables
	Precondition: 
	a is a reference to a integer array
	size is the array length

	Postcondition: 
		Elements in the range: [0, size - 1]
		are overwritten with random variables.
*/

void fillArray(int a[], int size);

/*Print array values
	Precondition:
		a is a reference to an integer array
		n is the array length
	Postcondition:
		elements with index 0 to n-1 are written to the standard output stream.
*/
void printArray(const int a[], int n);

double e(int x, int n);

#endif
