/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E4 - Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

int maxSum(int *arr)
{
    int maxInd1 = 0, maxInd2 = 0, max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxInd1 = i;
        }
    }

    if (maxInd1 == 0)
    {
        max = arr[1];
        maxInd2 = 1;
    }
    else
        max = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (max < arr[i] && i != maxInd1)
        {
            max = arr[i];
            maxInd2 = i;
        }
    }
    max = arr[maxInd1] + arr[maxInd2];
    return max;
}

int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", maxSum(arr));
}