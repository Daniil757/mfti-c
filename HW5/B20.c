/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Проверить число на простоту. |
 * --------------------------------------
 */

#include "stdio.h"

int main()
{
    int a, res = 0;
    scanf("%d", &a);

    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            res = 1;
    }

    if (a == 1)
        res = 1;

    if (res)
        printf("NO");
    else
        printf("YES");

    return 0;
}