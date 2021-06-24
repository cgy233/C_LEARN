#include <stdio.h>

int imax(int n, int m) {return (n > m ?  n : m);}
int imin(int n, int m) {return (n < m ?  n : m);}

int main(int argc, char const *argv[])
{
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
	printf("The maximum of %d and %d is %d.\n", 3, 5, imin(3, 5));
	return 0;
}
