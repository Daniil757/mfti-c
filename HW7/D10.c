/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D10 - Дано натуральное число n ≥ 1. Проверьте, является ли оно простым.
 * Программа должна вывести слово YES, если число простое или NO в противном случае. Необходимо составить рекурсивную функцию и использовать ее.
 * int is_prime(int n, int delitel)
 * --------------------------------------
 */

#include "stdio.h"

int is_prime(int n, int delitel)
{
    int res = 0;
    if (n == 1)
        return 1;
    if (delitel >= n / 2)
    {
        return res;
    }

    if (n % delitel == 0)
    {
        res++;
        return res;
    }
    is_prime(n, delitel + 1);
}

int main()
{
    int a = 0, res;
    scanf("%d", &a);
    res = is_prime(a, 2);
    if (!res)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}