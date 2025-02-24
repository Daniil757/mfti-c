/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C7 - Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления. |
 * --------------------------------------
 */

#include "stdio.h"

int converter(int n, int p)
{
    int res = 0, i = 0;
    do
    {
        res += (n % p) * i;        
        n /= p;
        i *= 10;
    } while (n > 0);

    return res;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    a = converter(a, b);
    printf("%d", a);
    return 0;
}