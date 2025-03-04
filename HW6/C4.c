/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C4 - Описать функцию вычисления f(x) по формуле:
 * f(x)= x*x при -2 ≤ x < 2;
 * x*x+4x+5 при x ≥ 2;
 * 4 при x < -2.
 * Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее. |
 * --------------------------------------
 */

#include "stdio.h"

/// @brief вычисляет X по условию
/// @param x - неизвестное число в формуле
/// @return результат функциюю f(x)
int calculatorFuncX(int x)
{
    int res = 0;
    if (x >= -2 && x < 2)
    {
        res = x * x;
    }
    else if (x >= 2)
    {
        res = x * x + 4 * x + 5;
    }
    else
    {
        res = 4;
    }
    return res;
}

int main()
{
    int a = 0, max = 0;
    while (1)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }

        max = max > calculatorFuncX(a) ? max : calculatorFuncX(a);
    }

    printf("%d", max);
    return 0;
}