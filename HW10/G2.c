/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G2 - Считать число N из файла input.txt. Сформировать строку из N символов. N четное число, не превосходящее 26. На четных позициях должны находится четные цифры
 * в порядке возрастания, кроме 0, на нечетных позициях - заглавные буквы в порядке следования в английском алфавите. Результат записать в файл output.txt
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char curChar = 'A';
    int num = 0, curNum = 0, decForChar = 2;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    while (fscanf(input, "%d", &curNum) == 1)
    {
        num *= 10;
        num += curNum;
    }

    for (int i = 0; i < (num / 2); i++)
    {
        fprintf(output, "%c%d", curChar, decForChar);
        curChar++;
        if (decForChar < 8)
            decForChar += 2;
        else
            decForChar = 2;
    }

    fclose(input);
    fclose(output);
    return 0;
}