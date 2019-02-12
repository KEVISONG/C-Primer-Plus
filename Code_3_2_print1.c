// print1.c
#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n", ten);
    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, two, ten - two);
    getchar();

    return 0;
}