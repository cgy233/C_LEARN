#include <stdio.h>
#include "hotel.h"

int menu(void)
{
	int code, status;
	printf("\n%s%s\n", STARTS, STARTS);
	printf("输入所需酒店的编号：\n");
	printf("1) 湖星客栈酒店\t\t\t 2)爱陌客主题酒店\n");
	printf("3) 星月湾酒店\t\t\t 4)君巢轻奢酒店\n");
	printf("5) 退出\n");
	printf("%s%s\n", STARTS, STARTS);
	while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
	{
		if (status != 1)
		scanf("%*s");
		printf("请输入1到5之间的整数.\n");
	}

	return code;
}

int getnights(void)
{
	int nights;

	printf("需要多少个晚上？\n");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("请输入整数，如2.\n");
	}
	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n=1; n <= nights; n++, factor *= DISCOUNT)
	total += rate * factor;
	printf("总费用为$%0.2f.\n", total);
}