/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - G8 - В файле input.txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. Требуется все числа,
 * которые встречаются в строке, поместить в отдельный целочисленный массив. Например, если дана строка "data 48 call 9 read13 blank0a",
 * то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл output.txt.
 * --------------------------------------
 */

#include "stdio.h"
#include "string.h"

int main()
{
    FILE *input, *output;
    const char *path = ""; // E:\\!DANIIL\\Learn\\mfti-c\\HW10\\ //
    char full_path[256] = {0};
    char str[1000];
    int nums[100];
    int length = 0, curNum = 0, i = 0, j = 0;

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

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            curNum *= 10;
            curNum += str[i] - 48;
            if (str[i+1] < '0' || str[i+1] > '9')
            {
                nums[j] = curNum;
                j++;
            }
        } else {
            curNum = 0;
        }
        i++;
    }

    for (int i = 0; i < j; i++)
    {
        for (int k = 0; k < j; k++)
        {
            if (nums[i] < nums[k]) {
                nums[i] = nums[i] ^ nums[k];
                nums[k] = nums[i] ^ nums[k];
                nums[i] = nums[i] ^ nums[k];
            }
        }
    }
    

    for (int i = 0; i < j; i++)
    {
        fprintf(output, "%d ", nums[i]);
    }
    // fwrite(no, sizeof(char), strlen(no), output);

    fclose(input);
    fclose(output);
    return 0;
}