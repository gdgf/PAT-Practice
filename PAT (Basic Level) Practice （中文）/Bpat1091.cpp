#include<cstdio>
#include<string>
#include<math.h>
int main() {
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int m;
		scanf("%d", &m);
		int j = 1;
		for (j = 1; j <= N; j++) {
			int K = j * pow(m, 2);

			//分别得到个、十、百
			int ge = K / 1 % 10;
			int shi = K / 10 % 10;
			int bai = K / 100 % 10;
			
			int y = shi * 10 + ge;  //2位数
			int y1 = bai * 100 + y;  //3位数

			if (y == m||ge==m||y1==m) {   //检测最后三位，虽然通过了，但这里有问题
				printf("%d %d\n", j, K);
				break;
			}
		}
		if (j > N) {
			printf("No\n");
		}
	}

	system("pause");
	return 0;
}

