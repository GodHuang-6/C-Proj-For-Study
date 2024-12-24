//编程求解圆的周长和面积，要求从键盘上输入半径，得出该圆的周长和面积，
//并在屏幕上显示周长和面积，结果保留两位小数。

#include <stdio.h>

int main()
{
	float r,s,c,pi = 3.14159;
	printf("Enter r:");
	scanf("%f",&r);
	printf("\n");
	s = pi * r * r;
	c = 2 * pi * r;
	printf("s = %.2f c = %.2f",s,c);
	printf("\n");
	return 0;
}