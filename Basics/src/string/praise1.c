#include <stdio.h>
#include <string.h>

#define PRASISE "You are an extraordinary being."

int main(int argc, char const *argv[])
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRASISE);
    
    // sizeof 和 strlen()
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ", strlen(PRASISE));
    printf("and occupies %zd memorey cells.\n", sizeof PRASISE);

    return 0;
}
