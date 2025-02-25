/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | С2 - Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования. |
 * --------------------------------------
 */

#include "stdio.h"

/// @brief Возвращает модуль числа
/// @param param число, у корого нужно вернуть модуль
/// @return модуль числа
int abs(int param)
{
    return param >= 0 ? param : -param;
}

/// @brief Возведение числа в степень
/// @param n число, которое нужно возвести в степень
/// @param p степень в которую возвести
/// @return число n в степени p
int power(int n, int p)
{
    n = abs(n);
    int res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    return res;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));

    return 0;
}