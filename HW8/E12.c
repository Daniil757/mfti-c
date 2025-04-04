/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E12 - Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        // число четное
        if (SIZE % 2 == 0)
        {
            // число / 2 тоже четное
            if (SIZE % 4 == 0)
            {
            }
            // разделенное число нечетное
            else
            {
                for (int i = 0; i < SIZE / 2 - 1; i++)
                {
                    int temp = arr[i];
                    arr[i] = arr[i] < arr[i + 1] ? arr[i] : arr[i + 1];
                    arr[i + 1] = arr[i] == arr[i + 1] ? temp : arr[i + 1];

                    temp = arr[i + 5];
                    arr[i + 5] = arr[i + 5] > arr[i + 1 + 5] ? arr[i + 5] : arr[i + 1 + 5];
                    arr[i + 1 + 5] = arr[i + 5] == arr[i + 1 + 5] ? temp : arr[i + 5 + 1];
                }
            }
        }
        // число нечетное
        else
        {
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