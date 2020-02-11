// 部分正确
#include<cstdio>
#include<cstring>
#include<iostream>

int isQualified(char *str) {
	//判断是不是个数，存在字母则不是数。
	//printf("%s", str);
	int m=0; //小数点前面的个数
	int xiao = 0;
	int zhuan = 0;

    //这一部分写的太复杂了
	for (int i = 0; i < strlen(str); i++) {
		
		if (str[i] == '-') {
			if (i == 0)
				continue;
			else
				return 0;
		}else if ('0' <= str[i] && str[i] <= '9' && zhuan == 0) { 
			continue;
		}
		else if (str[i] == '.') {
			zhuan++;
			if (zhuan > 1)return 0;
		}
		else if ('0' <= str[i] && str[i] <= '9' && zhuan == 1) {
			xiao++;
		}
		else {
			return 0;
		}
	}
	char temp[100];
	double dou;
	if (str[0] == '-') {
		for (int i = 1; i < strlen(str); i++)
			temp[i - 1] = str[i];
		
		sscanf(temp, "%lf", &dou);
		//printf("%s %.2lf\n", temp, -dou);
		if (-dou < -1000 || m>4 || xiao > 2) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else {
		sscanf(str, "%lf", &dou);
		//printf("%s %.2lf\n", str, dou);
		if (dou > 1000 || m>4 || xiao > 2) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

int main()
{	
	int N;
	//double e;
	scanf("%d",&N);
	double sum = 0;
	int count = 0;
	char number[10];
	for (int i = 0; i < N; i++) {

		scanf("%s", number);
		//printf("%s\n", number);
		if(isQualified(number)) {  //是标准数字
			double dou;
			sscanf(number, "%lf", &dou);
			sum = sum + dou;
			count++;
		}
		else {
			printf("ERROR: %s is not a legal number\n", number);
		}
	}

	if (count == 0) {
		printf("The average of 0 numbers is Undefined\n");
	}
	else {
		printf("The average of %d numbers is %.2lf\n",count,sum/count);
	}

	system("pause");
	return 0;
}

