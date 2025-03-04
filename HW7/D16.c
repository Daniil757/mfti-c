/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D16 - Написать логическую рекурсивную функцию и используя ее определить является ли введенное натуральное число точной степенью двойки.
 * int is2pow(int n)
 * --------------------------------------
 */

#include "stdio.h"

int is2pow(int n)
{
    int res = 1;
    if (n == 2 || n == 1)
        return res;

    if (n % 2 == 0)
    {
        res = is2pow(n / 2);
    }
    else
    {
        res = 0;
    }
    return res;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (is2pow(a))
        printf("YES");
    else
        printf("NO");
    return 0;
}