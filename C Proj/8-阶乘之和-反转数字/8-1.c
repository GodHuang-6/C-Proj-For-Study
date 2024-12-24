//使用while循环求1+2+3+……+10之和。

#include <stdio.h> 

int main() {
    int i = 1,sum=0;
    while(i <= 10) {
        sum += i;
        i++;
    }
    printf("%d",sum);
    printf("\n");
    return 0;
}