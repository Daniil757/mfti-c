/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F8 - В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в произвольном порядке, 
 * но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000.
 * --------------------------------------
 */

#include "stdio.h"

int find_min_array(int a[])
{
    int min = a[0];
    int i = 0;
    while (a[i] != 0)
    {
        min = a[i] < min ? a[i] : min;
        i++;
    }
    return min;
}

int find_elem_array(int a[], int elem) {
    int res = 0;
    int i = 0;
    while (a[i] != 0)
    {
        if (elem == a[i])
            res = 1;

        i++;
    }
    return res;
}

int compression(int a[])
{
    int res = 0, i = 0;
    int find = find_min_array(a);
    while (a[i] != 0)
    {
        find++;
        if (!find_elem_array(a, find)) {
            res = find;
        }
        i++;
    }
    
    return res;
}

int main()
{
    int a = 0;
    int arr[1000];
    int i = 0;
    while (1)
    {
        scanf("%d", &a);
        arr[i] = a;
        i++;
        if (a == 0)
            break;
    }
    
    
    printf("%d", compression(arr));
}