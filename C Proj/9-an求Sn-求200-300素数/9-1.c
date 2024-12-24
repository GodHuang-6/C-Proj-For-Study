#include <stdio.h>

int main()
{
	int a,n,sum = 0,i,j,x = 0;
	printf("Enter 2 integers(a n):");
	scanf("%d %d",&a,&n);
	printf("\n");
	for(i = 1;i <= n;i++) {
		for(j = 1;j <= i;j++) {
			x = x * 10 + a;
		}
		sum += x;
		x = 0;
	}
	printf("%d\n",sum);
	return 0;
}

//记得x后面要初始为0，求和sum = 0,求乘积x = 1;如果是5+55+555x = x * 10 + a;之后的要把x = 0;