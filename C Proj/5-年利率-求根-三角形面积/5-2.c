#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,x1,x2;
	printf("Enter a b c(b^2-4ac> 0):");
	scanf("%lf %lf %lf",&a,&b,&c);
	x1 =(- b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 =(- b - sqrt(b * b - 4 * a * c)) / (2 * a);
	printf("\n%lf %lf",x1,x2);
	printf("\n");
	return 0;
}