#include <stdio.h>

void main() {
    int i=10, j;

    i += i; // i = i + i; 现在i的值是20

    j = ++i; // i先自增1，然后j被赋值为i的新值
    // i现在是21，j也是21

    printf("%d,%d\n", i, j); // 输出21,21

    printf("%d,%d\n", i, ++i); // 这里是关键
    printf("%d,%d", ++i, i++);
    
    
}

//printf 函数的参数是按照从右到左的顺序进行计算的。
//++i先加后赋值，i++先赋值后加