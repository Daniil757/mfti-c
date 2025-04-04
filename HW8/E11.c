/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E11 - Считать массив из 10 элементов и отсортировать его по последней цифре.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] % 10 > arr[j + 1] % 10)
            {
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr);
}