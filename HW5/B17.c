/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр |
 * --------------------------------------
 */

#include "stdio.h"

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 10; i <= a; i++)
    {
        int cur_num, prod = 1, sum = 0;
        cur_num = i;

        while (cur_num > 0)
        {
            int digit = cur_num % 10;
            prod *= digit;
            sum += digit;
            cur_num /= 10;
        }
        
        if (prod == sum)
            printf("%d ", i);
    }

    return 0;
}