/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F19 - Определить количество положительных элементов квадратной матрицы, превышающих по величине среднее арифметическое всех элементов главной диагонали.
 * Реализовать функцию среднее арифметическое главной диагонали.
 * --------------------------------------
 */

#include "stdio.h"

int avg_diag(int size, int a[size][size]) {
    int sum = 0;
    int avg = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i][i];
    }
    avg = sum / size;
    return avg;
}

int counter(int size, int a[size][size])
{
    int count = 0;
    int avg = avg_diag(size, a);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i][j] > avg)
                count++;
        }
    }
    return count;
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
    printf("%d", counter(size, arr));
}