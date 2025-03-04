/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C10 - Составить функцию, печать всех простых множителей числа.
 * Использовать ее для печати всех простых множителей числа. void print_simple(int n) |
 * --------------------------------------
 */

#include "stdio.h"

void print_simple(int n)
{
    int res = 0, div = 2;
    while (1)
    {
        if (n == div)
        {
            printf("%d", div);
            break;
        }

        if (n % div == 0)
        {
            printf("%d ", div);
            n /= div;
        }
        else
        {
            div++;
        }
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    print_simple(a);

    return 0;
}