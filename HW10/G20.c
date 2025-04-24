/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G20 - Считать предложение из файла input.txt и определить можно ли из английских букв предложения записанного в файле получить одно слово - палиндром
 * Ответ напечатать на стандартный поток вывода. Требуется реализовать логическую функцию и применить ее.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"
#include <ctype.h>

int is_palindrom(const char *str)
{
    int count[26] = {0}; // Счетчик для английских букв a-z
    int length = 0; // Количество английских букв в строке

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char c = tolower(str[i]);
            count[c - 'a']++;
            length++;
        }
    }

    // Проверяем условия для палиндрома:
    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            odd_count++;
        }
    }

    return (length % 2 == 0) ? (odd_count == 0) : (odd_count == 1);
}

int main()
{
    FILE *input, *output;
    const char *path = "", *yes = "YES", *no = "NO"; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1002] = {0}, buf[1002] = {0}, res[1003] = {0};
    int length = 0;

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

    // Копируем остаток строки
    // strcpy(buf + i, cur);

    if (is_palindrom(str))
        printf("YES");
    else
        printf("NO");
    // Записываем результат в output.txt
    

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}