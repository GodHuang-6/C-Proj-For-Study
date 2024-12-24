//编程实现求2000以内所有3的倍数之和，并输出和值第一次超过1400时，
//3的倍数和值。(使用break与continue) （for结构实现）

#include <stdio.h>

int main()
{
	int i,sum = 0,num = 2000;
	for(i = 1;i <= 2000;i++) {
		if(i % 3 ==0) {
			sum +=i;
		}else{
			continue;
		}
		if(sum >= 1400) {
			break;
		}
	}
	printf("%d\n",sum);
	return 0;
}

//continue,con-tin-ue
//default,de-fa-ult