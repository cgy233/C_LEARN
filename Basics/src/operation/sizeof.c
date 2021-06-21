#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    size_t intsize;

    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
    sizeof n, intsize);
    return 0;
}
