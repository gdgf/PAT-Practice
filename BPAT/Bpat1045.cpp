
/*
	判断快速排序的主元：题目中已经给了方法，主元是左边的都比它小，右边的是比他都大
    以下版本运行超时
*/

#include<cstdio>
#include<cstring>
#include<iostream>

int number[100001]; 
int IS[100001] = {0};
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &number[i]);
	}
	int m = 0;
	for (int i = 0; i < N; i++) {
		int j = 0;
		for (j = i + 1; j < N; j++) {
			if (number[i] > number[j]) {
				IS[i] = 1;
				IS[j] = 1;
			}
		}
		if (j >= N && IS[i] == 0 ) {
			m++;
		}
	}
	printf("%d\n", m);
	m = 0;
	for (int i = 0; i < N; i++) {
		if (IS[i] == 0) {
			if (m == 0) {
				m++;
				printf("%d", number[i]);
			}
			else {
				m++;
				printf(" %d", number[i]);
			}
		}
	}
	system("pause");
	return 0;
}