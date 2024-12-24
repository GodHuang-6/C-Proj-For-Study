//假设银行定期存款的年利率rate为2.25%，并已知存款期限为n年，
//存款本金为capital元，试编程计算n年后可得到的本利之和deposit。（保留小数点后两位）
//pow函数：math.h头文件中的函数pow(x,y)的作用是求xy，
//即计算x的y次幂，其调用形式为pow(x,y)，返回值为double型。

#include <stdio.h>
#include <math.h>

int main()
{
	double capital,n,deposit,rate = 0.0225;
	printf("Enter capital and years:");
	scanf("%lf %lf",&capital,&n);
	deposit = capital * pow (1 + rate,n); 
	printf("\n%.2f",deposit);
	printf("\n");
	return 0;
}

//公式:本利之和 = 本金 * (1 + 年利率) ^ n
//deposit = capital * pow (1 + rate,n);
//利息 = 本利之和 - 本金
