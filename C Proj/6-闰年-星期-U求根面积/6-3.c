//编程实现求解三角形的周长和面积，要求三角形的三条边通过键盘输入，
//最后将得到的周长和面积输出，结果保留两位小数。

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,area,s,peri;
	printf("Enter the lengths a b c:");
	scanf("%f %f %f",&a,&b,&c);
	if(a + b > c && a + c > b && b + c > a) {
		s = 0.5 * (a + b + c);
		area = sqrt(s * (s - a) * (s -b) * (s -c));
		peri = a + b + c;
		printf("area = %.2f peri = %.2f",area,peri);
	}else {
		printf("error");
	}
	printf("\n");
	return 0;
}