/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D15 - Дана последовательность ненулевых целых чисел, завершающаяся числом 0.
 * Ноль в последовательность не входит. Определите наибольшее значение числа в этой последовательности. Для решения задачи необходимо
 * написать рекурсивную функцию вида: int max_find(int max)
 * --------------------------------------
 */

#include "stdio.h"

int max_find(int max)
{
    int a = 0, find = 0;
    scanf("%d", &a);
    if (max == 0)
        max = a;
    if (a == 0)
        return max;

    find = max_find(a);
    max = find > max ? find : max;
    return max;
}

int main()
{
    int res = 0;
    res = max_find(0);
    printf("%d", res);
    return 0;
}