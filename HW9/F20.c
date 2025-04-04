/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F20 - Дан целочисленный массив из 10 элементов. Необходимо определить количество четных и нечетных чисел.
 * Если количество чётных чисел больше, чем количество нечётных, заменить каждое нечетное число на
 * произведение нечетных цифр в его десятичной записи. Если количество нечётных чисел больше или равно количеству чётных,
 * заменить каждое чётное число на произведение чётных цифр в его десятичной записи.
 * --------------------------------------
 */

#include "stdio.h"

int product_of_odd_digits(int num) {
    int product = 1;
    int has_odd = 0;
    num = abs(num);
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }
    return has_odd ? product : 0;
}

// Функция для вычисления произведения четных цифр числа
int product_of_even_digits(int num) {
    int product = 1;
    int has_even = 0;
    num = abs(num);
    
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0 && digit != 0) {
            product *= digit;
            has_even = 1;
        }
        num /= 10;
    }
    return has_even ? product : 0;
}

int main()
{
    int arr[10];
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    if (even_count > odd_count)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] % 2 != 0)
            {
                int product = product_of_odd_digits(arr[i]);
                arr[i] = product == 1 ? 1 : product; 
            }
        }
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] % 2 == 0)
            {
                int product = product_of_even_digits(arr[i]);
                arr[i] = product == 1 ? 1 : product; 
            }
        }
    }

    // Вывод результата
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}