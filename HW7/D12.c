/**
 * @author Перевозчиков Даниил
 * --------------------------------------
 * @details - D12 - Дана монотонная последовательность, в которой каждое натуральное число k встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
 * Выведите первые n членов этой последовательности.
 * --------------------------------------
 */

#include "stdio.h"

void rec(int n, int count, int cur)
{
    static int pos = 0;
    if (n == pos)
        return;
    
    if (count > 0) {
        pos++;
        printf("%d ", cur);
        rec(n, count-1, cur);
    } else {
        count = cur += 1;
        rec(n, count, cur);
    }
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    rec(a, 1, 1);
    return 0;
}