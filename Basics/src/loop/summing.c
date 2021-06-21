#include <stdio.h>

int main(int argc, char const *argv[])
{
    long num;
    long sum = 0L;
    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    while (scanf("%ld", &num) == 1) // 相对status = scanf() 更符合C风格
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit)： ");
    }
    printf("Those integers sum to %ld.\n", sum);
    
    return 0;
}
