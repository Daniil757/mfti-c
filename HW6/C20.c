/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C20 - Проверить строку состоящую из скобок "(" и ")" на корректность.
 * int digit_to_num(char c)|
 * --------------------------------------
 */

#include "stdio.h"

int search_brace(char c)
{
    int res = 0;
    if (c == 40)
        res = 40;
    else if (c == 41)
        res = -40;
    return res;
}

int main()
{
    char c = '.';
    int res = 0;
    while (1)
    {
        c = getchar();
        if (c == '.')
            break;
        else
            res += search_brace(c);

        if (res < 0)
            break;
    }

    if (res == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}