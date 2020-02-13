/*
 * 还有错误，没有更正
 * 前面两字符串中:
 *      第一对相同的大写字母(大写字母，且所处位置相同)所代表的数字：星期几 A~G
 *      第二对相同的字符（0`9,A~N，且所处的位置相同）：表示0~23小时
 * 后面两个字符串中:
 *      第一对相同的字母出现的位置：代表分钟
 */
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main() {
	string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	
    string x[4];
	for (int i = 0; i < 4; i++) {
		cin>>x[i];
	}

	char A, B;
	int C = 0;
	int sum = 0;
	for (int j = 0; j<x[0].size() && j<x[1].size(); j++) {

		if ((x[0][j] >= 'A'&& x[0][j] <= 'Z') || (x[0][j] >= '0'&&x[0][j] <= '9')){
			if (x[1][j] == x[0][j]) {
				//第一个大小相同的字母大写字母:A~G
				if ((sum == 0) && (x[0][j] >= 'A'&& x[0][j] <= 'G')) {
					A = x[0][j];
					sum++;
				}else if (sum == 1 && ((x[0][j] >= 'A'&& x[0][j] <= 'N') || (x[0][j] >= '0' && x[0][j] <= '9'))) {
					B = x[0][j];
					break;
				}
			}
		}
	}
    
	//int sum1 = 0;
	for (int j = 0; j<x[2].size() && j<x[3].size(); j++) {
		if (x[3][j]==x[2][j] && ((x[2][j] >= 'A' && x[2][j] <= 'Z') || (x[2][j] >= 'a' &&x[2][j] <= 'z'))) {
			C = j;					
			break;
		}
	}

	int a = (int)(A - 'A');
	printf("%s ",week[a].c_str());

	int b = 0;
	if (B >= 'A'&& B <= 'N') {
		b = (int)(B - 'A') + 10;
	}else {
		b = (int)(B - '1')+1;
	}
	printf("%d", b);

    printf(":%02d\n", C);

	system("pause");
	return 0;
}

