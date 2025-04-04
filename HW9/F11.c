/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F11 - Дан целочисленный массив из 30 элементов. Элементы массива могут принимать произвольные целые значения помещающиеся в int.
 * Необходимо создать функцию, которая находит и выводит в порядке возрастания номера двух элементов массива, сумма которых минимальна.
 * --------------------------------------
 */

#include "stdio.h"

void search_2min(int size, int arr[])
{
    int min1 = arr[0], min2 = arr[0],
        index1 = 0,    index2 = 0;

    for (int i = 0; i < size; i++)
    {
        if (min1 > arr[i])
        {
            min1 = arr[i];
            index1 = i;
        }
    }

    if (index1 == 0) {
        index2 = 1;
        min2 = arr[index2];
    }

    for (int i = 0; i < size; i++)
    {
        if (min2 >= arr[i] && i != index1)
        {
            min2 = arr[i];
            index2 = i;
        }
    }
    
    if (index1 > index2) {
        index1 = index1 * index2;
        index2 = index1 / index2;
        index1 = index1 / index2;
    }
    printf("%d %d", index1, index2);
}

int main()
{
    int size = 30;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    search_2min(size, arr);
}