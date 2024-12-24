//用switch结构实现输入某年某月某日，判断这一天是这一年的第几天。

#include <stdio.h>

int main() {
	int year,month,day,n;
	printf("Enter 3 integers(year month day):");
	scanf("%d %d %d",&year,&month,&day);
	printf("\n");
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		n = 1;
	}else {
		n = 0;
	}
	switch(month) {
		case 1: printf("%d",day); break;
		case 2: printf("%d",31 + day); break;
		case 3: printf("%d",31 + 28 + n + day); break;
		case 4: printf("%d",31 * 2 + 28 + n + day); break;
		case 5: printf("%d",31 * 2 + 28 + n + 30 + day); break;
		case 6: printf("%d",31 * 3 + 28 + n + 30 + day); break;
		case 7: printf("%d",31 * 3 + 28 + n + 30 * 2 + day); break;
		case 8: printf("%d",31 * 4 + 28 + n + 30 * 2 + day); break;
		case 9: printf("%d",31 * 5 + 28 + n + 30 * 2 + day); break;
		case 10: printf("%d",31 * 5 + 28 + n + 30 * 3 + day); break;
		case 11: printf("%d",31 * 6 + 28 + n + 30 * 3 + day); break;
		case 12: printf("%d",31 * 6 + 28 + n + 30 * 4 + day); break;
	}
	printf("\n");
	return 0;
}