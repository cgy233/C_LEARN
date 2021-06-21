#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
		putchar(ch + 1);
		else
		putchar(ch);
	}
	putchar(ch); // 换行符

	return 0;
}
