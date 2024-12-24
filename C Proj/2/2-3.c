#include <stdio.h>

int main()
{
	char c1,c2,c3,c4 ,c5;
	printf("Enter 5 characters:");
	scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
	printf("%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4);
	printf("\n");
	return 0;
}