/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F5 - Написать только одну функцию, которая находит максимальный элемент в массиве. Всю программу загружать не надо.
 * --------------------------------------
 */

#include "stdio.h"

int find_max_array(int size, int a[])
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        max = a[i] > max ? a[i] : max;
    }
    return max;
}

int main()
{
    int size = 0;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", arr[i]);
    }
    find_max_array(size, arr);
}