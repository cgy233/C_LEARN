#include <stdio.h>

int main(int argc, char const *argv[])
{
    const double RENT = 2333.233;

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%010.2f*\n", RENT);
    return 0;
}
