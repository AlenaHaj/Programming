#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    float a, b, c, D; // х, х1, х2 нужны для разных вариантов выводов
    float x = 0;
    float x1 = 0;
    float x2 = 0; 
    std::cout << "Введите переменную a" << '\n';
    std::cin >> a;
    std::cout << "Введите переменную b" << "\n";
    std::cin >> b;
    std::cout << "Введите переменную c" << '\n';
    std::cin >> c;
    D = pow(b, 2) - 4 * a * c;
    if (a == 0)
    {
        x = -c / b;
        std::cout << "x=" << x;
    }
    else if (b == 0)
    {
        if (-c / a > 0)
        {
            x1 = -(sqrt(-c / a));
            x2 = sqrt(-c / a);
            std::cout << "x1=" << x1 << "\n" << "x2=" << x2;
        }
        else if (-c / a < 0)
        {
            std::cout << "Нет действительных корней" << "\n";
        }
    }
    else if (c == 0)
    {
        x1 = -b / a;
        x2 = 0;
        std::cout << "x1=" << x1 << "\n" << "x2=" << x2;
    }
    else if (a == 0 and b == 0)
    {
        std::cout << "Корней нет" << "\n";
    }
    else if (a == 0 and c == 0)
    {
        x = 0;
        std::cout << "x=" << x;
    }
    else if (b == 0 and c == 0)
    {
        x = 0;
        std::cout << "x=" << x;
    }
    else if (a == 0 and b == 0 and c == 0)
    {
        std::cout << "Множество действительных значений";
    }
    else if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << "x1=" << x1 << "\n" << "x2=" << x2;
    }
    else if (D == 0)
    {
        x = -b / (2 * a);
        std::cout << "x=" << x;
    }
    else if (D < 0)
    {
        std::cout << "Нет действительных корней";
    }
}
