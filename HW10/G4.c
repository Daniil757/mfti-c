/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G4 - В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите только те символы слов, 
 * которые встречаются в обоих словах только один раз Напечатайте их через пробел в файл output.txt в лексикографическом порядке.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char word1[101] = {0}, word2[101] = {0};
    int count1 = 0, count2 = 0;

    sprintf(full_path, "%sinput.txt", path);
    input = fopen(full_path, "r");

    sprintf(full_path, "%soutput.txt", path);
    output = fopen(full_path, "w");

    fscanf(input, "%s %s", word1, word2);

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            if (word1[j] == i && word1[j] != '\0') 
            {
                count1++;
            }
            if (word2[j] == i && word2[j] != '\0') 
            {
                count2++;
            }
        }

        if (count1 == 1 && count2 == 1)
        {
            fprintf(output, "%c ", i);
        }
        
        count1 = 0;
        count2 = 0;
    }
    
    

    fclose(input);
    fclose(output);
    return 0;
}