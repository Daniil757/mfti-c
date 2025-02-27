/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C19 - Составить функцию, которая преобразует текущий символ цифры в число.
 * Написать программу считающую сумму цифр в тексте.
 * int digit_to_num(char c)|
 * --------------------------------------
 */

#include "stdio.h"

int digit_to_num(char c)
{
    int res = 0;
    if (c > 47 && c < 58)
        res = c - 48;
    return res;
}

int main()
{
    char c = '9';
    int res = 0;
    while (1)
    {
        c = getchar();
        if (c == '.')
            break;
        else
            res += digit_to_num(c);
    }
    printf("%d", res);

    return 0;
}