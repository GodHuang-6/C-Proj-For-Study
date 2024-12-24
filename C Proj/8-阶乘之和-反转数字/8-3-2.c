//求x^y，x,y表示数字，y为正整数，x,y都由键盘输入。

#include <stdio.h>

int main()
{
	int x,y,i,r = 1;
	printf("Enter 2 integers(x y):");
	scanf("%d %d",&x,&y);
	printf("\n");
	for(i = 1;i <= y;i++) {
		r *= x;
	}
	printf("%d\n",r);
	return 0;
}