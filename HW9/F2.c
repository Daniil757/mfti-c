/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F2 - Написать только одну функцию, которая сортирует массив по возрастанию.
 * --------------------------------------
 */

#include "stdio.h"

void sort_even_odd(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j] % 2 != 0 && a[j+1] % 2 == 0)
            {
                int l = a[j];
                a[j] = a[j+1];
                a[j+1] = l;
            }
        }
    }
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
    sort_even_odd(size, arr);
}