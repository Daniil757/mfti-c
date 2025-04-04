/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G6 - В файле input.txt символьная строка не более 1000 символов. Необходимо проверить, является ли она палиндромом 
 * (палиндром читается одинаково в обоих направлениях). Реализовать логическую функцию is_palindrom(str) и записать ответ в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1001], *yes = "YES", *no = "NO";
    int i = 0, count = 0, res = 1, length = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);

    length = strlen(str);
    count = length / 2;

    if (str[length-1] == '\n') 
    {
        str[length-1] = '\0';
        length--;
    }

    for (int i = 0; i <= count; i++)
    {
        if (str[i] != str[length-1-i])
        {
            res = 0;
            break;
        }
    }
    
    if (res == 0)
    {
        fwrite(no, sizeof(char), strlen(no), output);
    } else {
        fwrite(yes, sizeof(char), strlen(yes), output);
    }    

    fclose(input);
    fclose(output);
    return 0;
}