/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F18 - Дана целочисленная квадратная матрица 10 х 10. реализовать алгоритм вычисления суммы максимальных элементов из каждой строки.
 * Напечатать значение этой суммы. Предполагается, что в каждой строке такой элемент единственный. Реализовать функцию поиска максимума в строке из 10 элементов
 * --------------------------------------
 */

#include "stdio.h"

int sumMax(int size, int a[size][size])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        int max = a[i][0];
        for (int j = 0; j < size; j++)
        {
            max = max < a[i][j] ? a[i][j] : max;
        }
        sum += max;
    }
    return sum;
}

int main()
{
    int size = 10;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d", sumMax(size, arr));
}