/*
数列的片段和
答案来源于:
https://www.cnblogs.com/wowpH/p/11687430.html
*/

#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);										// 数的个数
	double sum = 0, num;									// 和，数
	for (int i = 1; i <= n; ++i) {
		scanf("%lf", &num);
		sum += num * i * (n - i + 1);						// 数×所在片段数
	}
	printf("%.2lf", sum);									// 两位小数
	return 0;
}