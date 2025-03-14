/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E7 - Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива.
 * Необходимо изменить считанный массив и напечатать его одним циклом.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void reverse(int *arr)
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
                if (i < SIZE / 4)
                {
                    int temp = arr[i];
                    arr[i] = arr[(SIZE / 2) - i - 1];
                    arr[(SIZE / 2) - i - 1] = temp;
                    temp = arr[SIZE/2+i];
                    arr[SIZE/2+i] = arr[SIZE-i-1];
                    arr[SIZE-i-1] = temp;
                }
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