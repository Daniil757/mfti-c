/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E16 - Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    int res = 1;
    int count = 0, lastCount = 0;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i] == arr[j] && i != j)
                count++;
        }
        
        if (count > lastCount)
            res = arr[i];
        
        lastCount = count;
    }
    printf("%d", res);
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