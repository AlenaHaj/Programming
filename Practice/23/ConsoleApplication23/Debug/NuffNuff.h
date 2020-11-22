#ifndef SOCHETANIYA
#define SOCHETANIYA

int sochet(int a, int b)
{
	return ((factor(a)) / ((factor(b)) * (factor(a - b))));
}
#endif