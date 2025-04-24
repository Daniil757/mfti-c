/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G21 - Известный алгоритм Soundex (https://ru.wikipedia.org/wiki/Soundex) определяет, похожи ли два английских слова по звучанию. На вход он принимает слово и заменяет его на некоторый четырёхсимвольный код. Если коды двух слов совпадают, то слова, как правило, звучат похоже.
 * 
 * Вам требуется реализовать этот алгоритм. Он работает так:
 * 
 * 1. Первая буква слова сохраняется.
 * 2. В остальной части слова:
 *    - буквы, обозначающие, как правило, гласные звуки: a, e, h, i, o, u, w и y — отбрасываются;
 *    - оставшиеся буквы (согласные) заменяются на цифры от 1 до 6, причём похожим по звучанию буквам соответствуют одинаковые цифры:
 *      1: b, f, p, v
 *      2: c, g, j, k, q, s, x, z
 *      3: d, t
 *      4: l
 *      5: m, n
 *      6: r
 * 3. Любая последовательность одинаковых цифр сокращается до одной такой цифры.
 * 4. Итоговая строка обрезается до первых четырёх символов.
 * 5. Если длина строки меньше требуемой, недостающие символы заменяются знаком 0.
 * 
 * Примеры:
 * аmmonium → ammnm → a5555 → a5 → a500
 * implementation → implmnttn → i51455335 → i514535 → i514
 * --------------------------------------
 */
#include "stdio.h"
#include "string.h"
#include "ctype.h"

// Функция для получения кода Soundex для символа
int get_soundex_code(char c) {
    c = tolower(c);
    switch(c) {
        case 'b': case 'f': case 'p': case 'v':
            return 1;
        case 'c': case 'g': case 'j': case 'k': case 'q': case 's': case 'x': case 'z':
            return 2;
        case 'd': case 't':
            return 3;
        case 'l':
            return 4;
        case 'm': case 'n':
            return 5;
        case 'r':
            return 6;
        default: // a, e, h, i, o, u, w, y
            return 0;
    }
}

// Функция для преобразования слова в код Soundex
void soundex(const char *word, char *code) {
    int code_index = 1;
    int prev_code = 0;
    
    // Сохраняем первую букву
    code[0] = word[0];
    
    // Обрабатываем остальные буквы
    for (int i = 1; word[i] != '\0' && code_index < 4; i++) {
        int current_code = get_soundex_code(word[i]);
        
        // Пропускаем гласные и повторяющиеся коды
        if (current_code != 0) {
            if (current_code != prev_code)
                code[code_index++] = '0' + current_code;

            prev_code = current_code;
        }
    }

    while (code_index < 4)
    {
        code[code_index++] = '0';
    }
    
    code[4] = '\0'; // Завершаем строку
}

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char c, str[1001] = {0};
    int length = 0, count = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fscanf(input, "%s", str);
    char code[5]; // 4 символа + '\0'
    soundex(str, code);
    
    fprintf(output, "%s", code);

    // Закрываем файлы
    fclose(input);
    fclose(output);
    return 0;
}