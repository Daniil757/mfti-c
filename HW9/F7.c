/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F7 - Написать функцию, которая сжимает серии массива, состоящего из единиц и нулей по следующему принципу: 
 * например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1] преобразуется в [4,7,2,4] (т.к. начинается с нуля, то сразу
 * записывается количество элементов первой серии); а массив [1,1,1,0,0,0,0,0,0,0] преобразуется в [0,3,7] 
 * (т.к. первая серия - это единицы, то первый элемент преобразованного массива 0).
 * --------------------------------------
 */

#include "stdio.h"

int compression(int a[], int b[], int N)
{
    int count = 1, curVal = 0, posB = 0;
    if (a[0] == 1) {
        b[0] = 0;
        posB++;
    }

    for (int i = 0; i < N-1; i++)
    {
        curVal = a[i];

        if (i == N-2 && curVal != a[i+1]) {
            b[posB] = count;
            posB++;
            b[posB] = 1;
            posB++;
            continue;
        }

        if (curVal == a[i+1]) {
            count++;
            if (i == N-2) {
                b[posB] = count;
                posB++;
            }
            continue;
        }

        if (curVal != a[i+1]) {
            b[posB] = count;
            count = 1;
            posB++;
        }
    }

    // for (int i = 0; i < posB; i++)
    // {
    //     printf("%d ", b[i]);
    // }
    
    return posB;
}

int main()
{
    int size = 5;
    int a[size], b[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    compression(a, b, size);
    //printf("%d", compression(a, b, size));
}