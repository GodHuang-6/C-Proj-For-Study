//交换一个十进制整数（11-99）的个位和十位的数值，输出结果。
//例如：输入整数12，输出整数21。

#include <stdio.h>

int main()
{
	int num,a,b;
	printf("Enter 2 intergers(11-99):");
	scanf("%d",&num);
	a = num % 10;
	b = num / 10 % 10;
	printf("\n%d%d",a,b);
	printf("\n");
	return 0;
}