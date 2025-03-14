/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - E15 - Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам:
 * в одни помещать только положительные, во второй - только отрицательные. Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
 * --------------------------------------
 */

#include "stdio.h"

#define SIZE 10

void sort(int *arr)
{
    int count1 = 0, count2 = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0)
            count1++;
        if (arr[i] < 0)
            count2++;
    }

    int newArr1[count1], newArr2[count2];
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0)
        {
            newArr1[pos1] = arr[i];
            pos1++;
        }
        if (arr[i] < 0)
        {
            newArr2[pos2] = arr[i];
            pos2++;
        }
    }

    for (int i = 0; i < count1; i++)
    {
        printf("%d ", newArr1[i]);
    }
    for (int i = 0; i < count2; i++)
    {
        printf("%d ", newArr2[i]);
    }
}

int main()
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr);
}