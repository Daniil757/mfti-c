/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D5 - Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.
 * --------------------------------------
 */

#include "stdio.h"

void rec(int a)
{
    if (a == 1 || a == 0)
    {
        printf("%d", a);
        return;
    } else {
        rec(a / 2);
        printf("%d", a % 2);
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    rec(a);
    return 0;
}