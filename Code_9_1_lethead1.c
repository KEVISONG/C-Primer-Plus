// lethead1.c
#include <stdio.h>
#define NAME "ATLAS CORP."
#define ADDR "101 Megabuck Plaza"
#define PLACE "CA 866"
#define WIDTH 40

void starbar(void); /*函数原型*/

int main() {
    starbar(); /*函数调用*/
    printf("%s\n", NAME);
    printf("%s\n", ADDR);
    printf("%s\n", PLACE);
    starbar();

    getchar();
    return 0;
}

void starbar(void) { /*函数定义*/
    int count;

    for(int i = 0; i <= WIDTH; i++)
    {
        putchar('*');
    }
    putchar('\n');
    
}