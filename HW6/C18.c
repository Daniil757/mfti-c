/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C18 - Составить логическую функцию, которая определяет, что текущий символ это цифра.
 * Написать программу считающую количество цифр в тексте.
 * int is_digit(char c)|
 * --------------------------------------
 */

#include "stdio.h"

int is_digit(char c)
{
    int res = 0;
    if (c > 47 && c < 58)
        res = 1;
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
        else if (is_digit(c))
            res++;
    }
    printf("%d", res);

    return 0;
}