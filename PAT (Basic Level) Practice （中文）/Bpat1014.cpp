/*
 * 前面两字符串中：
 *      第一对相同的大写字母(大写字母，且所处位置相同)所代表的数字：星期几
 *      第二对相同的字符（1`9,A~N，且所处的位置相同）：表示24小时中的几点
 * 后满两个字符串中：
 *      第一对相同的字母出现的位置：代表分钟
 */
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main() {
	//freopen("in.txt","r",stdin);
	string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	char x[4][61];
	for (int i = 0; i < 4; i++) {
		scanf("%s", x[i]);
	}
	char A, B;
	int C = 0;
	int sum = 0;
	for (int j = 0; x[0][j] != '\0'; j++) {
		if (sum == 2) break;
		if ((x[0][j] >= 'A'&&x[0][j] <= 'Z') || (x[0][j] >= '0'&&x[0][j] <= '9')) {
			if (x[1][j] != '\n'&&x[1][j] == x[0][j]) {
				//确定第一个
				if ((sum == 0) && (x[0][j] >= 'A'&&x[0][j] <= 'Z')) {
					A = x[0][j];
					sum++;
					continue;
				}
				//确定第二个
				else if (sum == 1 && ((x[0][j] >= 'A'&&x[0][j] <= 'N') || (x[0][j] >= '1'&&x[0][j] <= '9'))) {
					B = x[0][j];
					sum++;
					break;
				}
			}
			
		}
	}
	int sum1 = 0;
	for (int j = 0; x[2][j] != '\0'; j++) {
		if (sum1 == 1) break;
		if ((x[2][j] >= '0'&&x[2][j] <= '9') || (x[2][j] >= 'A'&&x[2][j] <= 'Z') || (x[2][j] >= 'a'&&x[2][j] <= 'z')) {
			if (x[3][j] != '\0'&&x[3][j]==x[2][j]) {
					C = j;
					sum1++;
			}
		}
		
	}
	int a = (int)(A - 'A');
	cout << week[a]<<" ";
	//printf("%s ", week[a]);
	
	int b = 0;
	if (B >= 'A'&&B <= 'N') {
		b = (int)(B - 'A') + 10;
	}
	else {
		b = (int)(B - '1')+1;
	}
	printf("%d", b);

	if (C >= 10) {
		printf(":%d\n", C);
	}
	else {
		printf(":0%d\n", C);
	}
	//fclose(stdin);
	system("pause");
	return 0;
}

