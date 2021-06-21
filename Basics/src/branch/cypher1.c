#include <stdio.h>

#define SPACE ' '

int main(int argc, char const *argv[])
{
	char ch;

	ch = getchar();

	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE)
		putchar(ch);
		else
		putchar(ch + 1);
	}
	
	return 0;
}
