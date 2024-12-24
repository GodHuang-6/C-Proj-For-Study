//编程实现求200与300之间的素数并输出，每行输出5个数。 （for结构实现）

#include <stdio.h>

int main()
{
	int num,i,k = 0;
	for(num = 200;num <= 300;num++) {
		for(i = 2;i <= num;i++) {
			if(num % i == 0) {
				break;
			}
		}
		if(i >= num) {
			printf("%d\t",num);
			k++;
			if(k % 5 ==0) {
				printf("\n");
			}
		}
	}
	printf("\n");
	return 0;
}

//第一外循环为num=200；num<=300；因为num为200-300
//第二内循环i=2,因为素数除了1和它本身以外都有其他因数
//第三if判断如果i>=num即尝试了所以i直到i=num都没有找到因数，所以num为素数
//第四在一个if判断k来计数并以条件为换行的个数
