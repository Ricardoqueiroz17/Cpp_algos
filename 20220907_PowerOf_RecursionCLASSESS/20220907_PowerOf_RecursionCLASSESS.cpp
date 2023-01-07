#include <iostream>
using namespace std;

class Recursion {
public:
	int powerOf(int n, int power) {
		if (power == 1)
			return n;
		return powerOf(n, power - 1) * n;

	}
};

int main()
{
	Recursion o;
	int x = o.powerOf(3, 3);
	
	cout << x << endl;

	return 0;
}

