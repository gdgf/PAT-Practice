#include<cstdio>
#include<iostream>

int main()
{
	int N,D;
	double e;
	scanf("%d %lf %d",&N, &e, &D);
	
	int kong = 0, pokong = 0;
	for (int i = 0; i < N; i++) {
		int K=0;

		scanf("%d", &K);
		double date[366];   //这里的天数不能太少
		int day = 0;  //低于给定的阈值的天数
		
		//输入数据，并统计各个电量与给定阈值的关系。
		for (int i = 0; i < K; i++) {
			scanf("%lf", &date[i]);
			if (date[i] < e)day++; 
		}

		if (day > K/2) {
			pokong++;
			if (K > D) kong++;
		}
		
		//printf("\n");
	}
	pokong = pokong - kong;
	//printf("%d %d\n", pokong, kong);
	printf("%.1f%% %.1f%%", double(pokong) / N * 100, double(kong) / N * 100 );
	system("pause");
	return 0;
}

