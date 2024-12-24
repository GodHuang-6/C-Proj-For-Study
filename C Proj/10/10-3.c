//编程实现使用牛顿迭代法求方程2x3-4x2+3x-6=0。

#include <stdio.h>
#include <math.h>
int main() {
	double x2 = 5,x1;
	double f,f1;
	do {
		x1 = x2;
		f = 2 * pow(x1,3) + 4 * pow(x1,2) + 3 * x1 + 6;
		f1 = 6 * pow(x1,2) + 8 * x1 + 3;
		x2 = x1 - f / f1;
	}while(fabs(x2 - x1) < 1e-5);
	printf("%lf\n",x1);
	return 0;
}