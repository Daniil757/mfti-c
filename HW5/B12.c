/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Организовать ввод натурального числа с клавиатуры. Программа должна определить наименьшую и наибольшую цифры, 
 * которые входят в состав данного натурального числа. |
 * --------------------------------------
 */

#include "stdio.h"

int main()
{
    int a, b, min, max;
    scanf("%d", &a);
    min = a % 10;
    max = a % 10;
    while (a > 0)
    {
        if (min > a % 10)
            min = a % 10;
        
        if (max < a % 10)
            max = a % 10;
        
        a /= 10;
    }
    printf("%d %d", min, max);
    return 0;
}