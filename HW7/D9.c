/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D9 - Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
 * int sum_digits(int n)
 * --------------------------------------
 */

#include "stdio.h"

int sum_digits(int n)
{
    int sum = 0;
    if (n > 0) {
        sum += sum_digits(n/10);
    }
    return sum + n % 10;
}

int main()
{
    int a = 0, res;
    scanf("%d", &a);
    res = sum_digits(a);
    printf("%d", res);
    return 0;
}