/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - F10 - Дана строка состоящая из маленьких латинских букв 'a'..'z'. В конце строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений>
 *
 * --------------------------------------
 */

#include "stdio.h"

void count_word()
{
    char c = 0;
    char lastC = 0;
    int count = 0;
    while ((c = getchar()) != '.')
    {
        if (count == 0 || c == lastC) 
        {
            count++;
            lastC = c;
            continue;
        }

        if (c != lastC)
        {
            printf("%c%d", lastC, count);
            count = 1;
            lastC = c;
        }
    }
    printf("%c%d", lastC, count);
}

int main()
{
    count_word();
}