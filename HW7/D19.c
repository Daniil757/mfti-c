/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D19 - Дана строка из английских символов, пробелов и знаков препинания.
 * В конце строки символ точка. Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного потока ввода и
 * возвращает целое число - количество символов 'a' в данной строке.
 * int acounter(void)
 * --------------------------------------
 */

#include "stdio.h"

int acounter(void)
{
    char c;
    int counter = 0;
    c = getchar();
    if (c == '.')
        return counter;

    if (c == 'a')
        counter++;

    counter += acounter();

    return counter;
}

int main()
{
    printf("%d", acounter());
    return 0;
}