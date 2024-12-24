// 假定一个班级有三个学生，进行了某门课程的考试，考试成绩均为整数，
// 请编程输出总分(整数)和平均分(实数)。

#include <stdio.h>

int main()
{
    int sum, a, b, c;
    float avg;
    printf("Enter 3 integers:");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3.0;
    printf("sum = %d avg = %f", sum, avg);
    printf("\n");
    return 0;
}