#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int A[] = { 2,4,6,7,9 };
	for (int x : A)
	{
		sum = sum + x;
		cout << "The sum is: "<< sum << endl;
	}
}
