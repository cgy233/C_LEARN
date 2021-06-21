#include <stdio.h>

int main(int argc, char const *argv[])
{
    int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("cheeta\ttarzan\tjane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}
