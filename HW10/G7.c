/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G7 - В файле input.txt считать символьную строку, не более 10 000 символов. Посчитать количество строчных (маленьких) и прописных (больших)
 * букв в введенной строке. Учитывать только английские буквы. Результат записать в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[100001];
    int length = 0, countLow = 0, countUp = 0, i = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fgets(str, sizeof(str), input);

    length = strlen(str);
    if (str[length-1] == '\n') 
    {
        str[length-1] = '\0';
        length--;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            countLow++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            countUp++;
        }
        i++;
    }
    
    fprintf(output, "%d %d", countLow, countUp);
    //fwrite(no, sizeof(char), strlen(no), output);

    fclose(input);
    fclose(output);
    return 0;
}