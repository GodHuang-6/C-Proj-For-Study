//使用while循环求-1!+2!-3!……+10!之和。

#include <stdio.h>

int main() {
	int i = 1,j,sum = 0,x = 1;
	while(i <= 10) {
		for(j = 1;j <= i;j++) {
			x *= j;
		}
		if(i % 2 == 0) {
			sum += x;
		}else {
			sum = sum - x;
		}
		x = 1;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}