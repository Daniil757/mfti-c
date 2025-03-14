/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E5 - Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE    10

int sum(int *arr)
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[SIZE];
    int res[4];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", sum(arr));
}