/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * Дано трехзначное число, напечатать макисмальную цифру
 * --------------------------------------
*/

#include "stdio.h"

int main()
{
    int a, b, c, d, res;
    scanf("%d", &a);

    b = a / 100;
    c = (a % 100) / 10;
    d = (a % 10);
    res = b > c ? b : c;
    res = d > res ? d : res;

    printf("%d", res);
    return 0;
}