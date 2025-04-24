/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G19 - Разработать функцию дана строка из маленьких английских букв. Составить из символов палиндром максимальной длинны. При составлении палиндрома
 * буквы в палиндроме должны быть расположены в лексикографическом порядке. Записать ответ в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

void process_string(const char *input, char *output)
{
    int count[26] = {0}; // Счетчик для каждой буквы a-z
    int len = strlen(input);
    
    // Подсчитываем количество каждой буквы
    for (int i = 0; i < len; i++) {
        count[input[i] - 'a']++;
    }
    
    int output_index = 0;
    char middle_char = '\0';
    
    // Строим первую половину палиндрома в лексикографическом порядке
    for (int i = 0; i < 26; i++) {
        while (count[i] >= 2) {
            output[output_index++] = 'a' + i;
            count[i] -= 2;
        }
        // Если осталась одна буква - запоминаем как возможную середину
        if (count[i] == 1 && (middle_char == '\0' || 'a' + i < middle_char)) {
            middle_char = 'a' + i;
        }
    }
    
    // Добавляем середину, если есть
    if (middle_char != '\0') {
        output[output_index++] = middle_char;
    }
    
    // Зеркально копируем первую половину
    int mirror_start = (middle_char == '\0') ? output_index - 1 : output_index - 2;
    for (int i = mirror_start; i >= 0; i--) {
        output[output_index++] = output[i];
    }
    
    output[output_index] = '\0'; // Завершаем строку
}

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
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

    process_string(str, res);
    // Записываем результат в output.txt
    fprintf(output, "%s", res);

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}