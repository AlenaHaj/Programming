#ifndef SOCHETANIYA
#define SOCHETANIYA
#include <iostream>
using namespace std;

int sochet(int K, int n)
{
	int i, f1 = 1, f2 = 1, f3 = 1,C;
	for (i=1; i <= K; i++)
	{
		f1 *= i;
	}
	for (i = 1; i <= n; i++)
	{
		f2 *= i;
	}
	if ((K - n) > 0)
	{
		for (i = 1; i <= (K - n); i++)
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