#include <stdio.h>

int main(int argc, char const *argv[])
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    
    printf("True = %d; Flase = %d \n", true_val, false_val);

    return 0;
}
