//从键盘输入一个年份，判断该年份是否是闰年，
//如果是，输出闰年的字样，如果不是输出不是闰年的字样。

//如果该年份能被4整除，但不能被100整除，那么它是闰年。
//如果该年份能被400整除，那么它也是闰年。

#include <stdio.h>

int main()
{
	int years;
	printf("Enter the years:");
	scanf("%d",&years);
	if((years % 4 == 0 && years % 100 != 0) || years % 400 == 0) { 
		printf("\nyes");
	}else {
		printf("\nno");
	}
	printf("\n");
	return 0;
}