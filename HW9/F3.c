/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F3 - Написать функцию и программу демонстрирующую работу данной функции. Вывести в порядке возрастания цифры, входящие в десятичную запись натурального
 * числа N, не более 1000 цифр. Цифра пробел сколько раз данная цифра встречается в числе.
 * --------------------------------------
 */

#include "stdio.h"

void count_and_print_digits(int digits[], int length)
{
    int digit_counts[10] = {0}; // Массив для подсчета цифр (0-9)

    // Подсчет цифр в числе
    for (int i = 0; i < length; i++)
    {
        int d = digits[i];
        if (d >= 0 && d <= 9)
        {
            digit_counts[d]++;
        }
    }

    for (int d = 0; d < 10; d++)
    {
        if (digit_counts[d] > 0)
        {
            printf("%d %d\n", d, digit_counts[d]);
        }
    }
}

int main()
{
    int arr[1000]; 
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && i < 1000)
    {
        if (c >= '0' && c <= '9')
        {
            arr[i++] = c - '0'; 
        }
    }

    count_and_print_digits(arr, i);

    return 0;
}