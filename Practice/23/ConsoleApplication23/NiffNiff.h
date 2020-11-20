#ifndef SINH
#define	SINH
#include <iostream>
#include <cmath>
using namespace std;

double sin(double x, int k) 
{
	int i = 0;
	double sh = x, a = x;
	while (i<k) 
	{
		a *= (x * x / (2 * i + 2) / (2 * i + 3));
		sh += a;
		i++;
		k++;
	}
	return sh;
}
#endif SINH