//给一个百分制成绩，用if结构实现输出成绩等级‘A’，‘B’，‘C’，‘D’，‘E’。
//90分以上的为‘A’， 80~89分为‘B’，70~79分为‘C’，60~69分为‘D’，60分一下为 ‘E’。

#include <stdio.h>

int main() {
	int num;
	printf("Enter 1 integer:");
	scanf("%d",&num);
	printf("\n");
	if(num <= 100 && num >= 90) {
		printf("A");
	}else if(num <= 89 && num >= 80) {
		printf("B");
	}else if(num <= 79 && num >= 70) {
		printf("C");
	}else if(num <= 69 && num >= 60){
		printf("D");
	}else if(num < 59 && num >=0) {
		printf("E");
	}else {
		printf("error");
	}
	printf("\n");
	return 0;
}