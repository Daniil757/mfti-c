/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D10 - Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.
 * --------------------------------------
 */

#include "stdio.h"

int rec(int a)
{
    int counter = 0;
    if (a == 1)
    {
        counter++;
        return counter;
    }
    else
    {
        counter += rec(a / 2);
        return counter + a % 2;
    }
}

int main()
{
    int a = 0, res = 0;
    scanf("%d", &a);
    res = rec(a);
    printf("%d", res);
    return 0;
}