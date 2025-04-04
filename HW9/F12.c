/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F12 - Составить функцию которая меняет в массиве минимальный и максимальный элемент местами.
 * --------------------------------------
 */

#include "stdio.h"

void change_max_min(int size, int a[])
{
    int min = a[0], max = a[0],
        indMin = 0,   indMax = 0;

    for (int i = 0; i < size; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            indMin = i;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            indMax = i;
        }
    }
    
    a[indMin] = a[indMin] ^ a[indMax];
    a[indMax] = a[indMin] ^ a[indMax];
    a[indMin] = a[indMin] ^ a[indMax];
}

int main()
{
    int size = 0;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    change_max_min(size, arr);
}