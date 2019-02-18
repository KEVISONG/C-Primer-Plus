#include <stdio.h>
#define SPACE ' '
int main() {
    char ch;
    while(ch != '\n') {
        if (ch == SPACE) {
            putchar(ch);
        } else {
            putchar(ch + 1);
        }
        ch = getchar();
    }
    putchar(ch);
    getchar();
    
    return 0;
}