#include <stdio.h>

int main(int argc, char const *argv[])
{
	float length, width;
	printf("Enter the lenght of the rectangle:\n");
	while (scanf("%f", &length) == 1)
	{
		printf("Lenght = %0.2f:\n", length);
		printf("Enter its width:\n");
		if (scanf("%f", &width) != 1)
		break;
		printf("Width = %0.2f:\n", width);
		printf("Area = %0.2f:\n", length * width);
		printf("Enter the length of the rectangele:\n");
	}
	printf("Done.\n");
	return 0;
}
