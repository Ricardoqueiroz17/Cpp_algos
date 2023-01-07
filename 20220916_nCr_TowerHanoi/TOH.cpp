#include "header.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void Tower::TOH(int n, int A, int B, int C)
{
	if (n > 0)
	{
		TOH(n - 1, A, C, B);
		printf("\n(%d,%d)\n", A, C);
		TOH(n - 1, B, A , C);
	}
}