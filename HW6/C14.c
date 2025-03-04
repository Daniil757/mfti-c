/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C14 - Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр – четное число.
 * Используя эту функцию решить задачу. |
 * --------------------------------------
 */

#include "stdio.h"

int calculate(int a)
{
    int res = 0;
    while (a > 9)
    {
        res += a % 10;
        a /= 10;
    }
    res += a;
    if (res % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (calculate(a))
        printf("YES");
    else
        printf("NO");

    return 0;
}