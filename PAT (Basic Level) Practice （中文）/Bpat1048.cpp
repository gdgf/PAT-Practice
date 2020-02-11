#include<cstdio>
#include<string.h>
#include<math.h>
#include<iostream>

int main() {

	char A[101],B[101];

	scanf("%s %s", A,B);
	int Acount, Bcount;
	//首先将两数以B的长度对齐，
	Acount = strlen(A);
	Bcount = strlen(B);
	//printf("%d %d",Acount, Bcount);

	
	int cha = Bcount - Acount;
    
	if (cha >= 0) {   
		//A的长度比B的短的时候的情况
		//先把Acount的所有字符向后移动Bcount-Acount位
		for (int i = Acount - 1; i >= 0; i--) {
			//printf("%c", A[i]);
			A[i + cha] = A[i];
		}
		//然后把A的前Bcount-Acount位置为0；
		for (int i = 0; i < cha; i++) {
			A[i] = '0';
		}

	}
	else {
		for (int i = Bcount - 1; i >= 0; i--) {
			B[i + abs(cha)] = B[i];
		}
		//把A的直接复制过来。
		for (int i = 0; i < abs(cha); i++) {
			B[i] = A[i];
		}
	}
	
	//printf("%d\n", strlen(A));
	//printf("%d\n", strlen(B));


	/*
	printf("%d\n", strlen(A));
	for(int i=0;i<Bcount;i++)
		printf("%c", A[i]);
	printf("\n");
	*/

	for (int i = strlen(B)-1; i >=0; i--) {
		int m1 = B[i] - '0';
		int m2 = A[i] - '0';
		char str;
		int k = 0;

		if ((i + 1) % 2 != 0) {  //奇数
			k = (m1+m2)% 13;
			
			if (k == 10) {
				str = 'J';
			}
			else if (k == 11) {
				str = 'Q';
			}
			else if (k == 12) {
				str = 'K';
			}
			else {
				str = k + '0';
			}
			B[i] = str;
		}
		else {
			k = m1 - m2;
			if (k < 0) {
				k += 10;
			}
			B[i] = k + '0';
		}
	}

	for (int i = 0; i < strlen(B); i++) {
		printf("%c", B[i]);
	}

	system("pause");
	return 0;
}

