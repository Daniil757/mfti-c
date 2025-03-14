/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E2 - Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
 * --------------------------------------
 */

#include "stdio.h"

int min(int *arr)
{
    int res = arr[0];
    for (int i = 0; i < 5; i++)
    {
        res = res > arr[i] ? arr[i] : res;
    }
    return res;
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", min(arr));
}