#include <stdio.h>

int main() {
	int a[10];
	int i,j,t,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i = 0;i < n;i++) {
		printf("Enter %d integers:",n);
		scanf("%d",&a[i]);
		printf("\n");
	}
	for(j = 0;j < n - 1;j++) {
		for(i = 0;i < n - 1 - j;i++) {
			if(a[i] > a[i+1]) {
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
	}
	for(i = 0;i < n;i++) {
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}