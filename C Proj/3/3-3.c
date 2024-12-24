//读入一个单精度浮点数，保留3位小数输出这个浮点数。

#include <stdio.h>

int main()
{
	float num;
	printf("Enter 1 float:");
	scanf("%f",&num);
	printf("\n%.3f",num);
	printf("\n");
	return 0;
}