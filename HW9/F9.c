/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F9 - Составить только функцию которая в массиве находит максимальный из отрицательных элементов и меняет его местами с последним элементом массива
 * Гарантируется, что в массиве только один такой элемент или же такой элемент отсутствует. Если отрицательных элементов нет - массив не менять.
 * 
 * --------------------------------------
 */

#include "stdio.h"

void swap_negmax_last(int size, int a[])
{
    int min = a[0], index = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0 && min >= 0) {
            min = a[i];
            index = i;
            continue;
        }

        if (a[i] < 0 && a[i] > min) {
            index = i;
            min = a[i];
        }
    }

    if (min >= 0 )
        return;

    int buf = a[size-1];
    a[size-1] = a[index];
    a[index] = buf;
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
    swap_negmax_last(size, arr);
}