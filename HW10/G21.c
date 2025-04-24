/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G21 - Считать предложение из файла input.txt и определить можно ли из английских букв предложения записанного в файле получить одно слово - палиндром
 * Ответ напечатать на стандартный поток вывода. Требуется реализовать логическую функцию и применить ее.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"
#include "ctype.h"

void print_triangle(int n, FILE *output) {
    int level = 1;
    while (n >= level) {
        // пробелы в начале строки
        for (int i = 0; i < (n - level); i++) {
            fprintf(output, " ");
        }
        // Пробелы напечатали, теперь звездочку
        for (int i = 0; i < level; i++) {
            fprintf(output, "*");
            // надо ли пробел после звездочки
            if (i < level - 1) {
                fprintf(output, " ");
            }
        }
        // переходим на другую строку
        fprintf(output, "\n");
        level++;
    }
}

int main()
{
    FILE *input, *output;
    const char *path = "", *yes = "YES", *no = "NO"; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char c;
    int length = 0, count = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    while ((c = fgetc(input)) != EOF) {
        if (c == '*') {
            count++;
        }
    }

    // Количество камней должно быть треугольным числом: n(n+1)/2
    int n = 0; // кол-во уровней
    while (n * (n + 1) / 2 < count) {
        n++;
    }
    
    if (n * (n + 1) / 2 == count) {
        print_triangle(n, output);
    } else {
        fprintf(output, "NO\n");
    }

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}