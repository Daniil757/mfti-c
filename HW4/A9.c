/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Ввести пять чисел и найти наибольшее из них.  |
 * --------------------------------------
*/

#include "stdio.h"

int main()
{
    int a, b, c, d, e, res;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    res = a > b ? a : b;
    res = res > c ? res : c;
    res = res > d ? res : d;
    res = res > e ? res : e;
    printf("%d", res);
    return 0;
}