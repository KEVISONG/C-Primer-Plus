// platinum.c -- your weight in platinum
#include <stdio.h>
int main(void)
{
    float weight;
    float value;
    
    printf("Please enter your weight in pounds: ");
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    getchar();
    getchar();

    return 0;
}