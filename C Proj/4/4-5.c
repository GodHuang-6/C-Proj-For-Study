//输入一个华氏温度，要求输出摄氏温度。
//公式为c=5(F-32)/9,输出要有文字说明，取2位小数。

#include <stdio.h>

int main()
{
	float c,F;
	printf("Enter 1 floats:");
	scanf("%f ",&F);
	c= 5 * (F - 32) / 9;
	printf("\n%.2f",c);
	printf("\n");
	return 0;
}