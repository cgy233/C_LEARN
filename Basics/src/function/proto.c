#include <stdio.h>

int imax(int, int);

int main(int argc, char const *argv[])
{
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.5, 5.3));
	return 0;
}

int imax(int n, int m)
{
	return (n > m ? n : m);
}