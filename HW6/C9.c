/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C9 - Составить функцию вычисления N!. Использовать ее при вычислении факториала int factorial(int n) |
 * --------------------------------------
 */

#include "stdio.h"

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", factorial(a));

    return 0;
}