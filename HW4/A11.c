/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Напечатать сумму максимума и минимума.
 * Формат входных данных:
 * Пять целых чисел через пробел  |
 * --------------------------------------
*/

#include "stdio.h"

int main()
{
    int a, b, c, d, e, max, min, res;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < d ? min : d;
    min = min < e ? min : e;

    max = a > b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    max = max > e ? max : e;

    res = max + min;
    printf("%d", res);
    return 0;
}