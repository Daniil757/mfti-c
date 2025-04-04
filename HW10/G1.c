/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G1 - В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char str[1000] = {0};
    char full_path[256] = {0};
    int length = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r"); 

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w"); 

    fgets(str, sizeof(str), input);
    length = strlen(str);
    if (str[length-1] == '\n') 
    {
        str[length-1] = '\0';
        length--;
    }

    fprintf(output, "%s, %s, %s %d", str, str, str, length);

    fclose(input);
    fclose(output);
    return 0;
}