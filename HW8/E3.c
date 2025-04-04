/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E3 - Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE    10

void minMaxInd(int *arr, int *res)
{
    res[0] = res[2] = arr[0];
    res[1] = res[3] = 1;
    for (int i = 0; i < SIZE; i++)
    {
        if (res[0] < arr[i]) {
            res[0] = arr[i];
            res[1] = i + 1;
        }

        if (res[2] > arr[i]) {
            res[2] = arr[i];
            res[3] = i + 1;
        }
    }
    
}

int main()
{
    int arr[SIZE];
    int res[4];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    minMaxInd(arr, res);
    printf("%d %d %d %d", res[1], res[0], res[3], res[2]);
}