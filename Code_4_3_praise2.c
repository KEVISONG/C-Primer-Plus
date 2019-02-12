// praise2.c
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Your name of %u letters occupies %u memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %u letters ", strlen(PRAISE));
    printf("and occupies %u memory cells.\n", sizeof PRAISE);
    getchar();

    return 0;
}