/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F15 - Составить функцию которая определяет в массиве, состоящем из положительных и отрицательных чисел, сколько элементов превосходят по модулю максимальный элемент.
 * --------------------------------------
 */

#include "stdio.h"

int count_bigger_abs(int n, int a[])
{
    int count = 0;
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        max = max < a[i] ? a[i] : max;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && -a[i] > max) 
            count++;
    }

    return count;
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
    printf("%d", count_bigger_abs(size, arr));;
}