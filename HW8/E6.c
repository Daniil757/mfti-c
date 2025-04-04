/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E6 - Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE    12

float avg(int *arr)
{
    float res = 0.0f;
    for (int i = 0; i < SIZE; i++)
    {
        res += arr[i];
    }
    return res/SIZE;
}

int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%.2f", avg(arr));
}