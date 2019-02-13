// printout.c -- 使用转换说明
#include <stdio.h>
#define PI 3.1415926
int main(void)
{
    int number = 6;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Money is %c%d\n", '$', 2 * cost);
    getchar();

    return 0;
}