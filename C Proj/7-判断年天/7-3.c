//给一个百分制成绩，用switch结构实现输出成绩等级‘A’，‘B’，‘C’，‘D’，‘E’。
//90分以上的为‘A’， 80~89分为‘B’，70~79分为‘C’，60~69分为‘D’，60分一下为 ‘E’。

#include <stdio.h>

int main() {
	int num,x;
	printf("Enter 1 integer(0-100):");
	scanf("%d",&num);
	x = num / 10;
	switch(x) {
		case 10: printf("A"); break;
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		default : printf("E"); break;	
	}
	printf("\n");
	return 0;
}