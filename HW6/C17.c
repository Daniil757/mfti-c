/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C17 - Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.
 * int is_happy_number(int n)|
 * --------------------------------------
 */

#include "stdio.h"

int is_happy_number(int n)
{
    int sum = 0, mul = 1, res = 0;
    while (n > 0)
    {
        sum += n % 10;
        mul *= n % 10;
        n /= 10;
    }
    if (sum == mul)
        res = 1;
    else
        res = 0;

    return res;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (is_happy_number(a))
        printf("YES");
    else
        printf("NO");

    return 0;
}