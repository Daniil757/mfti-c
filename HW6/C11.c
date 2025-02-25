/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C11 - Составить функцию, которая определяет наибольший общий делитель двух натуральных
 * и привести пример ее использования. int nod(int a, int b) |
 * --------------------------------------
 */

#include "stdio.h"

int nod(int a, int b)
{
    int res = 0, div;
    if (a < b && b % a == 0)
        res = a;

    if (a > b && a % b == 0)
        res = b;

    if (a == b)
        res = a;

    div = a > b ? b : a;

    for (int i = 1; i <= div / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));

    return 0;
}