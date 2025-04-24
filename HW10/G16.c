/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G16 - В файле input.txt дано предложение. Необходимо заменить все имена «Ling» на «Cao» и результат записать в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0}, *pos, *oldWord = "Ling", *newWord = "Cao";
    char str[1002] = {0}, buf[1002] = {0};
    int length = 0, i = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);
    char *cur = str;

    length = strlen(oldWord);
    // Проходим по строке и заменяем все вхождения "Cao" на "Ling"
    while ((pos = strstr(cur, oldWord)) != NULL)
    {
        // Копируем часть до найденного слова
        strncpy(buf + i, cur, pos - cur);
        i += pos - cur;

        // Копируем новое слово
        strcpy(buf + i, newWord);
        i += strlen(newWord);

        // Продолжаем с остатка строки
        cur = pos + length;
    }

    // Копируем остаток строки
    strcpy(buf + i, cur);

    // Записываем результат в output.txt
    fprintf(output, "%s", buf);

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}