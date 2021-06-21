#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(int argc, char const *argv[])
{
    char name[40];
    float cash;
    
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    printf("Name:");
    scanf("%s", name);
    printf("Cash:");
    scanf("%f", &cash);

    printf("The %s family just may be $%1.2f richer!\n", name, cash);

    return 0;
}
