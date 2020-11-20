#ifndef SOCHETANIYA
#define SOCHETANIYA
#include <iostream>
using namespace std;

int sochet(int a, int b)
{
	int i, f1 = 1, f2 = 1, f3 = 1,C;
	for (i=1; i <= a; i++)
	{
		f1 *= i;
	}
	for (i = 1; i <= b; i++)
	{
		f2 *= i;
	}
	if ((a - b) > 0)
	{
		for (i = 1; i <= (a - b); i++)
		{
			f3 *= i;
		}
	}
	else
		cout << "действие совершить невозможно";
	C = f1 / (f2 * f3);
	return C;
	
}
#endif 