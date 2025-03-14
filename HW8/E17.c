/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E17 - Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз, и вывести их на экран.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        int n = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i] == arr[j] && i != j)
                n++;
        }
        if (n == 0)
            count++;
    }

    if (!count)
    {
        printf("");
        return;
    }

    int newArr[count];
    int pos = 0;
    for (int i = 0; i < SIZE; i++)
    {
        int c = 0;
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i] == arr[j] && i != j)
                c++;
        }

        if (c == 0)
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