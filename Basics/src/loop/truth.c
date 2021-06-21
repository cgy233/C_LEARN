#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 3;
    
    while (n)
    printf("%2d is true\n", n--);
    printf("%2d is false\n", n--);

    n = -3;

    while (n)
    printf("%2d is true\n", n++);
    printf("%2d is false\n", n);
    return 0;
}
