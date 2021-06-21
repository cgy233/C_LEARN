#include <stdio.h>

#define SEC_PER_MIN 60

int main(int argc, char const *argv[])
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<= 0 to quit):\n");
    scanf("%d", &sec);
    
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;

        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter nex value (<= 0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done.");
    
    return 0;
}
