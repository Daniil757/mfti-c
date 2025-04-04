/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F1 - Написать только одну функцию, которая сортирует массив по возрастанию.
 * --------------------------------------
 */

#include "stdio.h"

void sort_array(int size, int a[]) {
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int l = a[i];
                a[i] = a[j];
                a[j] = l;
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
    sort_array(size, arr);
}