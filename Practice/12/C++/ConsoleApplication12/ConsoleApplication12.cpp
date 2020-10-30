#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	int a;
	int f = 1;
	std::cout << "Введите число" << "\n";
	std::cin >> a;
	int i = 2;
	while (i <= a)
	{
		f = f * i;
		++i;
	}
	std::cout << "Факкториал " << a << " = " << f;
	return 0;
}