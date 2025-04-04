/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C16 - Составить функцию логическую функцию, которая определяет, верно ли, что число простое. Используя функцию решить задачу.
 * int is_prime(int n)|
 * --------------------------------------
 */

#include "stdio.h"

int is_prime(int n)
{
    int div = n / 2, res = 0;
    if (n <= 1) {
        return res = 1;
    } 

    for (int i = 2; i <= div; i++)
    {
        if (n % i == 0)
            res = 1;
    }
    return res;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (!is_prime(a))
        printf("YES");
    else
        printf("NO");

    return 0;
}