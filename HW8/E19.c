/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E19 - Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int a)
{
    if (a > 9) {
        sort(a/10);
        printf("%d ", a % 10);
    } else {
        printf("%d ", a);
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    sort(a);
}