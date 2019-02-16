#include <stdio.h>
int main() {
    int num = 0;
    int num2 = 0;
    int rtr_scan;
    rtr_scan = scanf("%d%d", &num, &num2);
    printf("The return value of scanf is %d", rtr_scan);
    getchar();
    getchar();
    
    return 0;
}