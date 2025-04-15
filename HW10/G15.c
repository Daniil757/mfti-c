/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G15 - В файле input.txt дано предложение. Необходимо заменить все имена «Cao» на «Ling» и записать результат в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0}, *pos, *oldWord = "Cao", *newWord = "Ling";
    char str[1002] = {0}, buf[1000];
    int length = 0, i = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);

    length = strlen(oldWord);
    while ((pos = strstr(str, oldWord)) != NULL) {
        // Копируем часть до найденного слова
        strncpy(buf + i, str, pos - str);
        i += pos - str;
        
        // Копируем новое слово
        strcpy(buf + i, newWord);
        i += strlen(newWord);
        
        // Продолжаем с остатка строки
        *str = *pos + length;
    }

    strcpy(buf + i, str);
    strcpy(str, buf);

    fprintf(output, "%s", str);
    // fwrite(resStr, sizeof(char), strlen(resStr), output);

    fclose(input);
    fclose(output);
    return 0;
}