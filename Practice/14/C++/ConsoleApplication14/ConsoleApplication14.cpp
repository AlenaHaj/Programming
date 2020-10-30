#include <iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    int n;
    int i = 2;
    int k = 0;
    std::cout << "Введите число n" << "\n";
    std::cin >> n;
    if (n == 1)
    {
        k = 1;
        std::cout << k;
    }
    while (n > 1)
    {
        n = n - i;
        i = i * 2;
        k = k + 1;
    }
    if (n <= 0)
    {
        k = k + 1;
        std::cout << k;
    }
    else
    {
        std::cout << k;
    }

    return 0;
}
