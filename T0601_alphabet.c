#include <stdio.h>
int main() {
    char letters[26];
    for(int i = 97; i < 123; i++)
    {
        letters[i - 97] = (char)i;
    }
    for(int i = 0; i < 27; i++)
    {
        printf("%c", letters[i]);
    }
    getchar();

    return 0;
}