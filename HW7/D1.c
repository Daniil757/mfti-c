/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D1 - Составить рекурсивную функцию, печать всех чисел от 1 до N
 * --------------------------------------
 */

#include "stdio.h"

void rec(int a) {
    static int b = 1;
    if (b <= a) {
        printf("%d ", b);
        b++;
        rec(a);
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    rec(a);
    return 0;
}