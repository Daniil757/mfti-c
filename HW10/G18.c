/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G18 - В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и сдвоенные пробелы). Для решения задачи разработать функцию. 
 * Результат записать в output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

void process_string(char *str)
{
    int len = strlen(str);
    int i = 0, j = 0, isSpace = 0;

    while (str[i] == ' ')
    {
        i++;
    }

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++; i++;
            isSpace = 0;
        } else {
            if (!isSpace) {
                str[j] = str[i];
                i++; j++;
                isSpace = 1;
            } else {
                i++;
            }
        }
    }

    if (j > 0 && str[j-1] == ' ')
    {
        j--;
    }

    str[j] = '\0';
}

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1002] = {0}, buf[1002] = {0};
    int length = 0, i = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);
    char *cur1 = str, *cur2 = str;

    // Копируем остаток строки
    // strcpy(buf + i, cur);

    process_string(str);
    // Записываем результат в output.txt
    fprintf(output, "%s", str);

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}