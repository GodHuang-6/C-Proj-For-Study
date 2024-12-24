//求ax2+bx+c=0方程的根。其中a、b、c由键盘输入。

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,detal,x1,x2;
	printf("Enter the numbers a b c:");
	scanf("%f %f %f",&a,&b,&c);
	detal = b * b - 4 * a * c;
	if(detal >= 0) {
		x1 = (-b + sqrt(detal)) / (2 * a);
		x2 = (-b - sqrt(detal)) / (2 * a);
		printf("x1 = %f x2 = %f",x1,x2);
	}else {
		printf("error");
	}
	printf("\n");
	return 0;
}