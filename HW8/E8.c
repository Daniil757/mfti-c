/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E8 - Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 12

void reverse(int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        // делится на 2 и 3
        if (SIZE % 2 == 0 && SIZE % 3 == 0)
        {
            if (i < SIZE / 6)
            {
                int temp = arr[i];
                arr[i] = arr[(SIZE / 3) - i - 1];
                arr[(SIZE / 3) - i - 1] = temp;

                temp = arr[SIZE / 3 + i];
                arr[SIZE / 3 + i] = arr[SIZE / 3 * 2 - 1 - i];
                arr[SIZE / 3 * 2 - 1 - i] = temp;

                temp = arr[SIZE / 3 * 2 + i];
                arr[SIZE / 3 * 2 + i] = arr[SIZE - i - 1];
                arr[SIZE - i - 1] = temp;
            }
        }
        // число нечетное
        else
        {
        }
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
    reverse(arr);
}