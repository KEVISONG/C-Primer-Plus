// talkback.c -- 演示用户交互
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main()
{
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi, what is your name?\n");
    scanf("%s", name);
    printf("%s, what is your weight in punds?\n", name);
    scanf("%f", &weight);   
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Your first name has %d letters.\n", letters);
    printf("We have %d bytes to store it.\n", size);
    getchar();
    getchar();

    return 0;
}