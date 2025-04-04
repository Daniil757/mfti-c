/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F17 - Составить функцию которая находит след матрицы в двумерном массиве. Показать пример ее работы на матрице из 5 на 5 элементов. 
 * След матрицы - это сумма элементов на главной диагонали.
 * --------------------------------------
 */

#include "stdio.h"

int trace_matrix(int size, int a[size][size])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i][i];
    }
    return sum;
}

int main()
{
    int size = 5;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", trace_matrix(size, arr));
}