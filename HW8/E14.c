/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E14 - Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более одного раза.
 * В результирующем массиве эти числа не должны повторяться.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        int isMore = 0;
        for (int j = i; j < SIZE; j++)
        {
            if (arr[i] == arr[j] && i != j)
                isMore++;
        }

        if (isMore == 1)
            count++;
    }

    int newArr[count];
    int pos = 0;
    for (int i = 0; i < SIZE; i++)
    {
        int isMore = 0;
        for (int j = i; j < SIZE; j++)
        {
            if (arr[i] == arr[j] && i != j)
                isMore++;
        }

        if (isMore == 1)
        {            
            newArr[pos] = arr[i];
            pos++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", newArr[i]);
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