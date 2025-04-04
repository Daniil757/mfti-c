/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C15 - Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию.
 * Используя данную функцию решить задачу. int grow_up(int n)|
 * --------------------------------------
 */

#include "stdio.h"

int grow_up(int n)
{
    int div = n % 10 + 1, res = 1;
    while (n > 0) {
        if (div > n % 10) {
            div = n % 10;
            res = 1;
            n /= 10;
        }
        else {
            res = 0;
            break;
        }
    }
    return res;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if (grow_up(a))
        printf("YES");
    else
        printf("NO");

    return 0;
}