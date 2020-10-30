#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите число n" << "\n";
	std::cin >> n;
	if (n > 1)
	{
		for (int i = 2; i < n; i++)
		{
			if (n % 2 != 0)
			{
				if (n % i+1 == 0)
				{
					std::cout << "Число составное";
					break;

				}
				else
				{
					std::cout << "Число простое";

				}
			}
			else
			{
				std::cout << "Число составное";
			}

			
		}
		return 0;
	}

} //ПРОГРАММА РАБОТАЕТ НЕ СОВСЕМ ВЕРНО. НУЖНО КОРРЕКТИРОВАТЬ