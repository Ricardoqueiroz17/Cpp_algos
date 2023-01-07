#include <iostream>
#include "Header.h"

int main()
{
	Functions f;
	int n = 5;
	int r = 3;
	printf("\nFatorial of %d C %d: %d", n, r, f.nCr(n, r));

	printf("\nRecursive Fatorial (using Pascal Tr) of %d C %d: %d", n, r, f.PascalTr_nCr(n, r));

	Tower t;
	t.TOH(4, 1, 2, 3);

	return 0;
}