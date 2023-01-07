#ifndef ARRAYHW_H_INCLUDED
#define ARRAYHW_H_INCLUDED

/* Header file is where we declare functions.Notice the #endif in the end of this file

   In this example, we will declare all the functions within one single Class.

*/

class Taylor {
public:
	double eHorner(int x, int n);
	double e(int x, int n);
	double eIter(int x, int n);
	double eIter2(int x, int n);
};

#endif

