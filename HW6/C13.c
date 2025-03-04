/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | C13 - Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)
 * sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
 * float sinus(float x) |
 * --------------------------------------
 */

#include "stdio.h"

#define PI 3.14159265358979323846

float abs(float param)
{
    return param >= 0 ? param : -param;
}

float power(float n, int p)
{
    n = abs(n);
    float res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    return res;
}

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

float cosinus(int x) {
    float rad = x * (PI / 180.0);
    float sum = 1.0; 
    float term = 1.0; 
    int n = 2;        

    const float precision = 0.001;

    while (abs(term) >= precision) {
        term = -term * power(rad, 2) / (n * (n - 1)); 
        sum += term; 
        n += 2;     
    }

    return sum;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%.3f", cosinus(a));

    return 0;
}