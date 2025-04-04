/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E9 - Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void right(int *arr)
{
    int temp = arr[9];
    for (int i = SIZE - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
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