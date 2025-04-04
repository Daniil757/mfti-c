/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D13 - Составить рекурсивную функцию, печать всех простых множителей числа.
 * --------------------------------------
 */

#include "stdio.h"

void rec(int n, int div)
{
    if (n < 2) 
        return;
    
    if (n % div == 0)
    {
        printf("%d ", div);
        rec(n/div, div);
    } else {
        rec(n, div+1);
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    rec(a, 2);
    return 0;
}