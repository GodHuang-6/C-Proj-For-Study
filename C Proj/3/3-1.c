//若a,b是整型变量，从键盘输入a和b的值，计算并输出a^2+b^2的值

#include <stdio.h>

int main()
{
	int a,b,s;
	printf("Enter 2 integers");
	scanf("%d %d",&a,&b);
	s = a * a + b * b;
	printf("\n%d",s);
	printf("\n");
	return 0;
}