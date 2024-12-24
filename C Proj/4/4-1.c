//从键盘为2个变量输入整数值交换后输出。
//（例如：输入后a的值是3，b的值是4，
//程序运行结束后，a的值为4，b的值为3，运行结果输出到屏幕上。）

#include <stdio.h>

int main()
{
	int a,b,t;
	printf("Enter 2 integers:");
	scanf("%d %d",&a,&b);
	t = a;
	a = b;
	b = t;
	printf("\na = %d b = %d",a,b);
	printf("\n");
	return 0;
}