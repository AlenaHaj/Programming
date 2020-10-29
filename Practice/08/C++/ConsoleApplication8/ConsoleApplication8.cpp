#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");
    float first, second;
    char sign;
    float res = 0.0;
    std::cout << "Введите числа" << "\n";
    std::cin >> first >> second;
    std::cout << "Введите оператор" << "\n";
    std::cin >> sign;

        switch (sign)
        {
        case '+':
            res = first + second;
            break;

        case '-':
            res = first - second;
            break;

        case '*':
            res = first * second;
            break;

        case '/':
            res = first / second;
            break;

        default:
            std::cout << "Введите действительный оператор";
        }
        std::cout << res;
    
}
