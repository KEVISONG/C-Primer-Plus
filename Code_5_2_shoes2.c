// shoes2.c -- 把鞋码转换成英寸
#include <stdio.h>
#define ADJUST 7.31
int main()
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 6.0;
    while(shoe < 36)
    {
        foot = SCALE * shoe + ADJUST;
        printf("Shoe size foot length\n");
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1;
    }
    getchar();

    return 0;
}