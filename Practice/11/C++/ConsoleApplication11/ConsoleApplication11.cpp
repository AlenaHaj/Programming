#include <iostream>
int main()
{
	setlocale(LC_ALL, "RU");
	float a, x;
	std::cout << "Введите число" << "\n";
	std::cin >> a;
	int b;
	std::cout << "Введите степень" << "\n";
	std::cin >> b;
	int i = 1;
	while (i < b)
	{
		x = a * a;
		++i;
	}
	std::cout << x;
	return 0;
}