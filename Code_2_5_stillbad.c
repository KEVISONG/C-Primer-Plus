// stillbad.c
#include <stdio.h>
int main()
{
    int n, n2, n3;
    // 语义错误
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
    getchar();

    return 0;
}