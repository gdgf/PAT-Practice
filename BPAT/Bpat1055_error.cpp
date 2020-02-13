

#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

struct Info {
	char name[5];
	int high;
};

Info info[10001];
Info info1[10001];  //存储后面调整顺序后的队列

int cmp(Info p1, Info p2) {
	if (p1.high == p2.high) {
		if(strcmp(p1.name, p2.name)<0)
			return 1;
		else 
			return 0;
	}
	return p1.high > p2.high;
}

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
		scanf("%s %d", info[i].name, &info[i].high);

	int row = N / K;     //每一排的人数
	int firstrow = N - (row - 1)*K; //第一排的人数
	//printf("%d %d\n", row, firstrow);
	std::sort(info, info + N, cmp);
	
	/*
	for (int i = 0; i < N; i++) {
		printf("%s %d\n", info[i].name, info[i].high);
	}
	*/
	//把每一排的人放到相应的位置上去。
	for (int i = 0; i < K; i++) {
		int m =0;
		if (i == 0) {
			if (firstrow % 2 == 0) {  //偶数个数
				for (int j = 0; j < firstrow; j++) {
					if (j < firstrow / 2) {
						info1[j] = info[firstrow-(2 * j + 1)];
					}
					else if(j == firstrow / 2) {
						info1[j] = info[0];
					}
					else {
						info1[j] = info[firstrow-2*(firstrow-j)];
					}
				}
			}
			else {
				for (int j = 0; j < firstrow; j++) {
					if (j < firstrow / 2) {
						info1[j] = info[firstrow - (2 * (j+1))];
					}
					else if (j == firstrow / 2) {
						info1[j] = info[0];
					}
					else {
						info1[j] = info[2*(j-1)];
					}
				}
			}
		}
		else {
				
			if (row % 2 == 0) {  //偶数个数
					
				for (int j = firstrow + (i - 1)*row; j < firstrow + i * row; j++) {

					if (j < row / 2) {
						info1[j] = info[row - (2 * j + 1)];
					}
					else if (j == row / 2) {
						info1[j] = info[0];
					}
					else {
						info1[j] = info[firstrow - 2 * (firstrow - j)];
					}
				}
			}
			else {
				for (int j = firstrow + (i - 1)*row; j < firstrow + i * row; j++) {
					if (j < row / 2) {
						info1[j] = info[firstrow - (2 * (j + 1))];
					}
					else if (j == row / 2) {
						info1[j] = info[0];
					}
					else {
						info1[j] = info[2 * (j - 1)];
					}
				}
			}
		}
	}
	


	for (int i = 0; i < K; i++) {
		//第一排
		if (i == 0) {
			
			for (int j = 0; j < firstrow; j++) {
				if (j == 0)
					printf("%s", info1[j].name);
				else {
					printf(" %s", info1[j].name);
				}
			}
		}
		else {
			for (int j = firstrow + (i - 1)*row; j < firstrow + i * row;  j++) {
				if ( j== firstrow + (i - 1)*row)
					printf("%s", info1[j].name);
				else {
					printf(" %s", info1[j].name);
				}
			}
		}
		printf("\n");
	}
	
	
	system("pause");
	return 0;
}

