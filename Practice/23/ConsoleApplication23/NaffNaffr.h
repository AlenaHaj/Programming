#pragma once
int fact(int N)
{
    if (N < 0) // если пользователь ввел отрицательное число
        return 0; 
    if (N == 0) // если пользователь ввел ноль,
        return 1; 
    else 
        return N * fact(N - 1);
}