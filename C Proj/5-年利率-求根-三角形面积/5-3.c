#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c,area,s;
	printf("Enter the lengths of the sides of triangle a b c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	s = 0.5 * (a + b +c);
	area = sqrt(s * (s - a) * (s - b) * (s -c));
	printf("\n%lf",area);
	printf("\n");
	return 0;
}