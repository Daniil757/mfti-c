/**
 * @author Перевозчиков Даниил
 *
 * --------------------------------------
 * | Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все заглавные английские буквы в строчные. |
 * --------------------------------------
 */

#include "stdio.h"

int main()
{
    char a;
    while (1)
    {
        scanf("%c", &a);
        if (a == '.')
            break;

        switch (a)
        {
        case 'A':
            printf("a");
            break;
        case 'B':
            printf("b");
            break;
        case 'C':
            printf("c");
            break;
        case 'D':
            printf("d");
            break;
        case 'E':
            printf("e");
            break;
        case 'F':
            printf("f");
            break;
        case 'G':
            printf("g");
            break;
        case 'H':
            printf("h");
            break;
        case 'I':
            printf("i");
            break;
        case 'J':
            printf("j");
            break;
        case 'K':
            printf("k");
            break;
        case 'L':
            printf("l");
            break;
        case 'M':
            printf("m");
            break;
        case 'N':
            printf("n");
            break;
        case 'O':
            printf("o");
            break;
        case 'P':
            printf("o");
            break;
        case 'Q':
            printf("q");
            break;
        case 'R':
            printf("r");
            break;
        case 'S':
            printf("s");
            break;
        case 'T':
            printf("t");
            break;
        case 'U':
            printf("u");
            break;
        case 'V':
            printf("v");
            break;
        case 'W':
            printf("w");
            break;
        case 'X':
            printf("x");
            break;
        case 'Y':
            printf("y");
            break;
        case 'Z':
            printf("z");
            break;
        default:
            printf("%c", a);
            break;
        }
    }

    return 0;
}