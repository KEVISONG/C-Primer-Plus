/* golf.c -- 高尔夫锦标赛记分卡 */
#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("               cheeta   tarzan    jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
    getchar();
    
    return 0;
}