/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G14 - В файле input.txt в одной строке фамилию, имя и отчество. Сформировать файл приветствие output.txt, где останутся имя и фамилия
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1002] = {0}, first_name[1001] = {0}, name[1001] = {0};
    int length = 0, i = 0, xSpace = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);

    length = strlen(str);
    if (str[length - 1] == '\n')
    {
        str[length - 1] = '\0';
        length--;
    }

    if (str[0] == ' ')
    {
        xSpace = -1;
    }

    while (str[i] != '\0')
    {
        if (xSpace == 2)
        {
            if (str[i] == ' ')
            {
                break;
            }
            fprintf(output, "%c", str[i]);
        }

        if (xSpace == 1)
        {
            fprintf(output, "%c", str[i]);
            if (str[i] == ' ')
            {
                xSpace = 2;
                i = 0;
                continue;
            }
        }

        if (str[i] == ' ' && !xSpace)
        {
            xSpace = 1;
            fprintf(output, "%s", "Hello, ");
        }
        i++;
    }

    fprintf(output, "%c", '!');
    // fwrite(resStr, sizeof(char), strlen(resStr), output);

    fclose(input);
    fclose(output);
    return 0;
}