//输入两个正整数m和n，求其最大公约数和最小公倍数。

#include <stdio.h>

int main() {
	int m,n,t,s;
	printf("Enter 2 nubmers m,n (m > n):");
	scanf("%d,%d",&m,&n);
	s = m * n;
	do{
		t = m % n;
		m = n;
		n = t;
	}while(t != 0);
	printf("%d %d",m,s / m);
	return 0;
}

//第一条件为t!=0继续循环，当t=0时，最大公约数为m，最小公倍数为s/m