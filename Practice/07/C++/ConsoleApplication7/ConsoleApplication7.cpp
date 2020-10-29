#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	float a, a1, a2, b, b1, b2, c, c1, c2; //x - это для первого способа; х1, х2 - для второго
	float p, S; // p - полупериметр, S - Площадь треугольника
	int f; //Для определения каким способом решать
	std::cout << "Найти плошадь треугольника через:" << "\n" << "1. Через длины сторон a, b, c" << "\n" << "2. Через координаты вершин А, В, С" << "\n";
	std::cin >> f;
	
		if (f == 1)
		{
			std::cout << "Введите длину стороны а" << "\n";
			std::cin >> a;
			std::cout << "Введите длину стороны b" << "\n";
			std::cin >> b;
			std::cout << "Введите длину стороны c" << "\n";
			std::cin >> c;
			if (a + b > c and a + c > b and c + b > a)
			{
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				std::cout << "S=" << S;
			}
			else
			{
				std::cout << "Треугольника не существует";
			}
		}
		else if (f == 2)
		{
			std::cout << "Введите координаты точки А" << "\n";
			std::cin >> a1 >> a2;
			std::cout << "Введите координаты точки B" << "\n";
			std::cin >> b1 >> b2;
			std::cout << "Введите координаты точки C" << "\n";
			std::cin >> c1 >> c2;
			a = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
			b = sqrt(pow(b1 - c1, 2) + pow(b2 - c2, 2));
			c = sqrt(pow(c1 - a1, 2) + pow(c2 - a2, 2));
			if (a + b > c and a + c > b and c + b > a)
			{
				p = (a + b + c) / 2;
				S = sqrt(p * (p - a) * (p - b) * (p - c));
				std::cout << "S=" << S;
			}
			else
			{
				std::cout << "Треугольника не существует";
			}
		}
		else if (f != 1 or f != 2)
		{
			std::cout << "Выбрано недопустипое значение. Закройте программу и попытайтесь снова";
			
		}
	return 0;
}


	

