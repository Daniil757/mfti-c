/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C6 - Когда создатель шахмат, древнеиндийский мудрец и математик Сисса бен Дахир, показал своё изобретение Правителю страны, 
 * тому так понравилась игра, что он позволил изобретателю право самому выбрать награду. 
 * Мудрец попросил у Повелителя за первую клетку шахматной доски заплатить ему одно зерно риса, 
 * за второе — два, за третье — четыре и т. д., удваивая количество зёрен на каждой следующей клетке. Помоги повелителю сосчитать сколько зерен на какой клетке лежит.
 * Необходимо составить функцию, которая определяет, сколько зерен попросил положить на N-ую клетку изобретатель шахмат 
 * (на 1-ую – 1 зерно, на 2-ую – 2 зерна, на 3-ю – 4 зерна, …) |
 * --------------------------------------
 */

#include "stdio.h"

/// @brief Вычислить количество зерен на клетке
/// @param n - номер клетки
/// @return вычисленное количество зерен
unsigned long long int countGrains(int n)
{
    unsigned long long int res = 1;
    for (int i = 1; i < n; i++)
    {
        res *= 2;
    }

    return res;
}

int main()
{
    unsigned long long int res = 0;
    int a = 0;
    scanf("%d", &a);
    res = countGrains(a);
    printf("%llu", res);
    return 0;
}