/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G5 - В файле input.txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" 
 * и наоборот, как заглавные, так и строчные. Результат записать в output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1001];
    int i = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);

    while (str[i] != '\0')
    {
        if (str[i] == 'a')
        {
            str[i] = 'b';
            i++;
            continue;
        }
        if (str[i] == 'b')
        {
            str[i] = 'a';
            i++;
            continue;
        }
        if (str[i] == 'A')
        {
            str[i] = 'B';
            i++;
            continue;
        }
        if (str[i] == 'B')
        {
            str[i] = 'A';
            i++;
            continue;
        }
        i++;
    }

    fwrite(str, sizeof(char), strlen(str), output);
    
    fclose(input);
    fclose(output);
    return 0;
}