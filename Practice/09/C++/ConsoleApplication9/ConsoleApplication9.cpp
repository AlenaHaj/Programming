#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int h1, h2, m1, m2, i1, i2, f;
	char a;
	std::cout << "Время прихода первого человека" << "\n";
	std::cin >> h1 >> a >> m1;
	std::cout << "Время прихода второго человека" << "\n";
	std::cin >> h2 >> a >> m2;
	if ((0 <= h1 and h1 <= 23)) 
	{
		if ((0 <= h2 and h2 <= 23)) 
		{
			if ((0 <= m1 and m1 <= 59)) 
			{
				if ((0 <= m2 and m2 <= 59)) 
				{
					i1 = 60 * h1 + m1;
					i2 = 60 * h2 + m2;
					f = abs(i1 - i2);
					if (f < 15) 
					{
						std::cout << "Встреча состоится\n";
					}
					else 
					{ 
						std::cout << "Встреча не состоится\n"; 
					}
				}
				else 
				{ 
					std::cout << "Ошибка, введите корректное время\n"; 
				}
			}
			else 
			{ 
				std::cout << "Ошибка, введите корректное время\n"; 
			}
		}
		else 
		{ 
			std::cout << "Ошибка, введите корректное время\n"; 
		}
	}
	else 
	{ 
		std::cout << "Ошибка, введите корректное время\n"; 
	}
	return 0;
}

