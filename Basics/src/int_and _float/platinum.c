#include <stdio.h>

int main(void)
{
    float weight, value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's chect it out.\n");
    printf("Please enter your weight in punds:\t\n");
    
    scanf("%f", &weight);

    value = 1700 * weight * 14.5833;

    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("Your are easily worth that!If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
    
}