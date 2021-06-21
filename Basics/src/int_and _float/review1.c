#include <stdio.h>

void two()
{
    printf("two.\n");
}

void one_three()
{
    printf("one.\n");
    two();
    printf("three.\n");
}

void smile()
{
    printf("Smile!");
}

void squared_cubed()
{
    int toes = 10;

    printf("toes = %d, toes * 2 = %d, toes squared = %d, toes cubed: %d\n", toes, toes * 2, toes * toes ,toes * toes * toes);

}

int age_to_days(int age)
{
    return 365 * age;
}

int main(void)
{

    printf("陈广意.\n");
    printf("陈广意.\n陈广意.\n");
    printf("陈");
    printf("广意.\n");

    printf("陈广意住在4栋.\n");

    printf("陈广意都在这个世界上生活了%d天了.\n", age_to_days(20));

    squared_cubed();

    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    printf("Starting now:\n");
    one_three();
    printf("Done!\n");
    

}