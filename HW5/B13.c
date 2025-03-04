/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Посчитать количество четных и нечетных цифр числа. |
 * --------------------------------------
 */

#include "stdio.h"

int main()
{
    int a, b, even = 0, uneven = 0;
    scanf("%d", &a);

    while (a > 0)
    {
        b = a % 10;
        if ((b / 2) * 2 != b)
            uneven++;
        else
            even++;

        a /= 10;
    }
    printf("%d %d", even, uneven);
    return 0;
}