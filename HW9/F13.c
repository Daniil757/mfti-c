/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F13 - Составить функцию которая возвращает количество элементов на заданном отрезке [from, to] для массива.
 * --------------------------------------
 */

#include "stdio.h"

int count_between(int from, int to, int size, int a[]) {
    int count = 0;  

    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {
            count++;  
        }
    }

    return count;  \
}

int main()
{
    int size = 12;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    count_between(1, 3, size, arr);
}