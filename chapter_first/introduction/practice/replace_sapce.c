#include <stdio.h>

main()
{
    int c, pre_space_flag;
    pre_space_flag = 0;

    // while ((c = getchar()) != EOF)
    // {
    //     if (c == ' ' && !pre_space_flag)
    //         ;
    //     else
    //         putchar(c);

    //     pre_space_flag = (c == ' ');
    // }

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t");

        else if (c == '\b')
            printf("\\b");

        else if (c == '/')
            printf("\\\\");
        else
            putchar(c);
    }
}