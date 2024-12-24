//使用do...while循环实现输入一个整数，将各位数字反转后输出。如：输入1234，输出4321

#include <stdio.h>

int main()
{
	int num,r,sum;
	printf("Enter 1 integer:");
	scanf("%d",&num);
	printf("\n");
	do {
		r = num % 10;
		sum = sum * 10 + r;
		num = num / 10;
	}while(num != 0);
	printf("%d\n",sum);
	return 0;
}