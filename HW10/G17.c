/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G17 - В файле input.txt записаны символы. Необходимо разработать функцию, которая меняет местами пары соседних символов не обращая внимание на символы пробел. 
 * Если количество символов нечетно (пробелы не считаем), то последний символ не меняем. Результат записать в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

void swap(char* a, char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void process_string(char *str)
{
    int len = strlen(str);
    if (str[len-1] == '\n') 
    {
        str[len-1] = '\0';
        len--;
    }
    
    char *pos1 = str, *pos2 = str;

    int i = 0, j = 1;
    while (j < len) {
        pos1 = str + i;
        pos2 = str + j;
        if (*pos1 == ' ')
        {
            i++; j++;
            pos1 = str + i;
            pos2 = str + j;
            continue;
        }

        if (*pos2 == ' ')
        {
            j++;
            pos2 = str + j;
            continue;
        }

        swap(pos1, pos2);
        i = j + 1;
        j = j + 2;
    }
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
    //strcpy(buf + i, cur);

    process_string(str);
    // Записываем результат в output.txt
    fprintf(output, "%s", str);

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}