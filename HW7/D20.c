/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D20 - Написать рекурсивную функцию возведения целого числа n в степень p.
 * int recurs_power(int n, int p)
 * --------------------------------------
 */

#include "stdio.h"

int recurs_power(int n, int p)
{
    int res = 1;
    if (p > 1) {
        res = n * recurs_power(n, p-1);
        return res;
    } else if (p == 1) {
        res *= n;
        return res;
    } else if (p == 0) {
        return res;
    }
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", recurs_power(a, b));
    return 0;
}