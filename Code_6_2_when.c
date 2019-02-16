// when.c -- 何时退出循环
#include <stdio.h>
int main() {
    int n = 2;
    
    while (n <= 6) {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");
    getchar();

    return 0;
}