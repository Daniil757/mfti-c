/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G9 - В файле input.txt строка из меленьких и больших английских букв, знаков препинания и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы.
 * Результат записать в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1000] = {0}, resStr[1000] = {0};
    int length = 0, i = 0;

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

    while (str[i] != '\0')
    {
        length = strlen(resStr);
        int xExists = 0;
        for (int j = 0; j <= length; j++)
        {
            if (str[i] == resStr[j] || (str[i] >= ' ' && str[i] <= '/'))
                xExists++;
        }
        if (!xExists)
        {
            resStr[length] = str[i];
        }
        i++;
    }

    length = strlen(resStr);
    for (int i = 0; i < length; i++)
    {
        fprintf(output, "%c", resStr[i]);
    }
    //fwrite(resStr, sizeof(char), strlen(resStr), output);

    fclose(input);
    fclose(output);
    return 0;
}