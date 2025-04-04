/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D2 - Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
 * --------------------------------------
 */

#include "stdio.h"

void rec(int a)
{
    static int b = 0;
    if (a >= 0)
    {
        b += a;
        a--;
        rec(a);
    } else {
        printf("%d ", b);
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    rec(a);
    return 0;
}