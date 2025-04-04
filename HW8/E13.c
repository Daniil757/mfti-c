/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E13 - Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 100 < 10)
            count++;
    }
    int newArr[count];
    int pos = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] % 100 < 10) {
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