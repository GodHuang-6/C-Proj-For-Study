#include <stdio.h>

int main() {
	float x;
	printf("Enter x:");
	scanf("%f",&x);
	if(x < 0) {
		printf("0");
	}else if(x >= 0 && x < 5) {
		printf("%f",x);
	}else if(x >= 5  && x < 10) {
		printf("5");
	}else {
		printf("%f",2 * x);
	}
	printf("\n");
	return 0;
}