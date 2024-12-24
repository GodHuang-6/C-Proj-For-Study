//输入一个任意3位数，编程实现得到这个3位数每位上的数字并输出，
//如输入357，输出：百位数字：3， 十位数字：5  ，个位数字7。

#include <stdio.h>

int main()
{
	int num,a,b,c;
	printf("Enter a three-digit integers:");
	scanf("%d",&num);
	a = num / 10 / 10 % 10;
	b = num / 10 % 10;
	c = num % 10;
	printf("\n%d %d %d",a,b,c);
	printf("\n");
	return 0;
}