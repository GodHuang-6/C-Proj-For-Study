//编程实现对从键盘输入的10个整数的数组进行排序，
//用冒泡法实现对10个数从小到大排序。

#include <stdio.h>

int main() {
	int a[10];
	int i,j,t;

	for(i = 0;i < 10;i++) {
		printf("Enter 10 integers");
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(j = 0;j < 9;j++) {
		for(i = 0;i < 9 - j;i++) {
			if(a[i] > a[i+1]) {
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	for(i = 0;i < 10;i++) {
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}

//第一先定义int a[]; int i,j,t;
//第二输入和输出循环为为n次，输入函数要有&,你已经每次忘记加这个了
//第三t = a[i];a[i ] = a[i + 1];a[i + 1] = t; 这句话是冒泡排序的核心代码，
//printf("\n");要带""