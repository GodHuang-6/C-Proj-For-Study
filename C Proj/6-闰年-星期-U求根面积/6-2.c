//输入一个0~6的整数，转换成星期输出。

#include <stdio.h>

int main()
{
	int num;
	printf("Enter 1 integer(0-6):");
	scanf("%d",&num);
	switch(num) {
		case 0:break;printf("Sunday");
		case 1:break;printf("Monday");
		case 2:break;printf("Tuesday");
		case 3:break;printf("Wednesday");
		case 4:break;printf("Thursday");
		case 5:break;printf("Friday");
		case 6:break;printf("Saturday");
		default:printf("error");
	}
		
	printf("\n");
	return 0;
}

//第一switch语句switch(整数型变量或者字符型变量) { case 同上: 语句 break; default: 语句 break; } 
//第二default不要写错de fault