/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F6 - Написать только одну логическую функцию, которая определяет, верно ли, что среди элементов массива есть два одинаковых.
 * Если ответ «да», функция возвращает 1; если ответ «нет», то 0.
 * --------------------------------------
 */

#include "stdio.h"

int is_two_same(int size, int a[])
{
    int res = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i] == a[j]) 
            {
                res = 1;
                break;
            }
        }
    }
    return res;
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
    printf("%d", is_two_same(size, arr));
}