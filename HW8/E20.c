/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E20 - Переставить цифры в числе так, что бы получилось максимальное число.
 * --------------------------------------
 */

#include "stdio.h"

int pow1(int a, int n)
{
    int res = 1;
    if (n == 0)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        res *= a;
    }

    return res;
}

void sortMax(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = arr[i];
            arr[i] = arr[i] > arr[j] ? arr[j] : arr[i];
            arr[j] = arr[i] != temp ? temp : arr[j];
        }
    }
}

void sort(int a)
{
    int count = 1, res = 0;
    const int copyA = a;
    while (a > 9)
    {
        a /= 10;
        count++;
    }
    a = copyA;

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        if (a > 9)
            arr[i] = a % 10;
        else
            arr[i] = a;
        
        a /= 10;
    }

    sortMax(arr, count);
    for (int i = 0; i < count; i++)
    {
        res += arr[i] * pow1(10, count - i - 1);
    }
    printf("%d", res);
}

int main()
{
    int a;
    scanf("%d", &a);
    sort(a);
}