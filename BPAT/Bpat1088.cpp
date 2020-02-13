/*
还有一个没通过。
*/

#include<cstdio>
#include<math.h>
struct Info {
	int jia;
	int yi;
	int bing;
}info;
int main() {
	int M, X, Y;
	scanf("%d %d %d", &M, &X, &Y);

	int N = 0;
	int Max = 0;
	for (int h = 1; h <= 9; h++) {
		for (int i = 0; i <= 9; i++) {
			int m = 0;
			int jia = h * 10 + i;    //甲
			int yi = i * 10 + h;    //乙
			int bing = yi/Y;        //丙

			if (abs(jia-yi)*Y==yi*X) {  //满足限定条件
				if(jia>Max){
					Max = info.jia;
					info.jia = jia;
					info.yi  = yi;
					info.bing = bing;
				}
				N++;
			}
		}
	}
	if (N == 0) {
		printf("No Solution");
	}
	else {
		printf("%d", info.jia);
		if (info.jia > M)printf(" Cong");
		else if (info.jia == M)printf(" Ping");
		else printf(" Gai");

		if (info.yi > M)printf(" Cong");
		else if (info.yi == M)printf(" Ping");
		else printf(" Gai");

		if (info.bing > M)printf(" Cong");
		else if (info.bing == M)printf(" Ping");
		else printf(" Gai");
	}
	//system("pause");
	return 0;
}