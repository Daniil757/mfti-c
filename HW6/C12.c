/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C12 - Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
 * sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
 * float sinus(float x) |
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

float sinus(float x)
{
    
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));

    return 0;
}