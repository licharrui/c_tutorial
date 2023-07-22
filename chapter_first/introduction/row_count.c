#include <stdio.h>

/* 统计输入的行数 */
main()
{
    int c, nl, space, tab;
    nl, space, tab = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            nl++;

        if (c == ' ')
            space++;

        if (c == '\t')
            tab++;
    }

    printf("换行符:%d 空格:%d 制表符: %d\n", nl, space, tab);
}