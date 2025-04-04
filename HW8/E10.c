/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E10 - Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 12

void right(int *arr)
{
    for (int j = 0; j < 4; j++)
    {
        int temp = arr[SIZE - 1];
        for (int i = SIZE - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
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
    right(arr);
}