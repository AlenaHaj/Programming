#pragma once
#include <iostream>
using namespace std;
int fact(int x)
{
	if (x < 0) // если пользователь ввел отрицательное число
		return 0; 
	if (x == 0) // если пользователь ввел ноль,
		return 1;
	else 
		return x * fact(x - 1);
}