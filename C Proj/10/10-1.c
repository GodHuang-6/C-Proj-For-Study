#include <stdio.h>

int main() {
	double i = -1,n = 1,s = 0;
	do{
		i = -i;
		s += i * (2 * n + 1) /((2 * n) * (2 * n));
		n++;
	}while((2 * n + 1) /((2 * n) * (2 * n))  <= 1e-3);
	printf("%lf\n",s);
	return 0;
}

//第一看题秒知3个变量s,n,i,根据条件知道类型double
//第二变换负号i=-1,然后循环i=-i
//第三科学计数1e-3,1e整数
//第四求和的s要定义s = 0,注意n要定义n = 1
//((2 * n) * (2 * n))要两层括号，因为在分母中