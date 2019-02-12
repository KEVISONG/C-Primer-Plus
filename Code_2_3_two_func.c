// two_func.c
#include <stdio.h>

void butler(void);
int main(void)
{
    int a = 1,b = 2,c = 3;
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea.\n");
    getchar();

    return 0;
}
void butler(void)
{
    printf("You rang, sir?\n");
}