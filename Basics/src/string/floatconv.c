#include <stdio.h>

int main(int argc, char const *argv[])
{
    float n1 = 3.0;
    float n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e%.1e%.1e%.1e\n", n1, n2, n3, n4);
    printf("%1d%1d\n", n3, n4);
    printf("%1d%1d%1d%1d\n", n1, n2, n3, n4);

    return 0;
}
