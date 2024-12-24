//使用putchar函数分别以字符型变量、整型变量形式输出字符A。

#include <stdio.h>

int main() {
    char b = 'B';
    int a = 65;
    putchar('A');
    putchar(b);
    putchar(a);
    printf("\n");
    return 0;
}

//第一定义字符时char a = 'A';用单引号''
//第二putchar()括号里面为字符或者变量字符要带单引号''