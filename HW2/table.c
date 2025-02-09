/**
 * @author Перевозчиков Даниил
 *
 * Распечатать таблицы истинности
 */

#include "stdio.h"
#include "stdint.h"
#include "stdbool.h"
#include "table.h"

int main()
{
    // Печатаем таблицу истинности с имликацией
    printTableImp();

    printf("\n");

    // Печатаем таблицу истинности с эквиваленцией
    printTableEkv();
    return 0;
}

/**
 * @brief Выводит таблицу истонности для примера и импликацией
 */
void printTableImp(void)
{
    // переменные
    uint8_t A, B;

    // Заголовок таблицы
    printf("A | B | !A | A -> B | !A || B\n");
    printf("-----------------------------\n");

    // Перебираем все возможные значения A и B (0 и 1)
    for (A = 0; A <= 1; A++)
    {
        for (B = 0; B <= 1; B++)
        {
            bool imp = (!A || B);
            bool notA = !A;
            bool notA_or_B = (notA || B);

            printf("%d | %d | %d  |    %d   |    %d\n", A, B, notA, imp, notA_or_B);
        }
    }
}

/**
 * @brief Выводит таблицу истонности для примера и эквиваленцией
 */
void printTableEkv(void)
{
    // переменные
    uint8_t A, B;

    // Заголовок таблицы
    printf("A | B | !A | !B | A <--> B | X = A && B | Y = !A && !B| X || Y\n");
    printf("--------------------------------------------------------------\n");

    for (A = 0; A <= 1; A++)
    {
        for (B = 0; B <= 1; B++)
        {
            bool ekv = (A == B);
            bool A_and_B = A && B; // X
            bool notA_and_notB = !A && !B; // Y
            bool X_or_Y = A_and_B || notA_and_notB;

            printf("%d | %d |  %d |  %d |     %d    |      %d     |      %d      |   %d  \n", A, B, !A, !B, ekv, A_and_B, notA_and_notB, X_or_Y);
        }
    }
}