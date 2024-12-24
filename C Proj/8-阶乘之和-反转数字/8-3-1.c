//求x^y，x,y表示数字，y为正整数，x,y都由键盘输入。

#include <stdio.h>
#include <math.h>

int main()
{
	int x,y;
	printf("Enter 2 integers(x y):");
	scanf("%d %d",&x,&y);
	printf("%lf",pow(x,y));	
	printf("\n");
	return 0;
}

//pow()返回的类型为double，因此输出时需要用%lf。
