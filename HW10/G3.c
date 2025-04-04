/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G3 - В файле input.txt дана строка из не более 1000 символов. Показать номера символов, совпадающих с последним символом строки.
 * Результат записать в файл output.txt
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1001], last_char;
    int length = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);

    length = strlen(str);
    if (length > 0 && str[length-1] == '\n') {
        str[length-1] = '\0';
        length--;
    }

    last_char = str[length-1];

    for (int i = 0; i < length-1; i++)
    {
        if (str[i] == last_char)
            fprintf(output, "%d ", i);
    }
    

    fclose(input);
    fclose(output);
    return 0;
}