#include <stdio.h>
/*  当前fahr= 0, 20, ..., 300时，分别
    打印华氏温度与摄氏温度对照表
    浮点数版本*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* 温度表的下限 */
    upper = 300; /* 温度表上限 */
    step = 20;   /* 步长 */

    fahr = lower;
    printf("%s\n", "华氏温度与摄氏温度转换表");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
}