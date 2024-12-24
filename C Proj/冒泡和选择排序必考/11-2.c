//编程实现在定义时候对10个浮点数的数组初始化，
//并使用选择法实现对10个数从大到小排序。
#include <stdio.h>

int main()
{
    float t,a[10] = {2.3, 4.0, 1.3, 8.6, 6.5, 9.5, 5.5, 10.2, 3.2, 4.4};
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("%.2f\t", a[i]);
    }
    printf("\n");
    for (j = 0; j < 9; j++) {
        for (i = j + 1; i < 10; i++) {
            if (a[i] > a[j]) {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%.2f\t", a[i]);
    }
    printf("\n");
    return 0;
}

//因为a[]为float，所以交换时t也要为float
//交换变量t一点要和a[]类型一样
//a[]里面的i，j要为int类型
//不要把a[]打成a{}
//j < 9对了，因为最后一个元素不需要比较，为最小