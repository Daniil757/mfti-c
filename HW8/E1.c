/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E1 - Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
 * --------------------------------------
 */

#include "stdio.h"

float avg(int *arr)
{
    float res = 0.0f;
    for (int i = 0; i < 5; i++)
    {
        res += arr[i];
    }
    return res/5.0;
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%.3f", avg(arr));
}