#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;

    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = 321; // 超过256 取x % 256
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);

    return 0;
}
