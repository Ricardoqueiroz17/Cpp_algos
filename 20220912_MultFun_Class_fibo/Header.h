#ifndef ARRAYHW_H_INCLUDED
#define ARRAYHW_H_INCLUDED

/* Header is where we define Classes and functions */

//Memoization function: Recursion + global variable that stores already called functions
extern int F[10];//This is a global variable used in the MEMOIZATION recursive function. It avoids the excessive recursion (keep calling recursive too much time)


class Fibo {
public:
	int recursFibo(int n);
	int FiboIter(int n);
	int mFib(int n);

};

#endif	
