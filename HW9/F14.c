/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F14 - Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива.
 * --------------------------------------
 */

#include "stdio.h"

int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;
    if (from > to) {
        from = from ^to;
        to = from ^to;
        from = from ^to;
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
        {
            sum += a[i];
        }
    }

    return sum;
}

int main()
{
    int size = 12;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum_between_ab(1, 3, size, arr);
}