#include<cstdio>
#include<cstdlib>
#include<cstring>
char str[100001];
int main() {
	int N, sum = 0;
	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'P') {
			for (int j = i ; j< strlen(str); j++) {
				if (str[j] == 'A') {
					for (int k = j ; k < strlen(str); k++) {
						if (str[k] == 'T')
							sum++;
					}
				}
			}
		}
	}
	printf("%d\n", sum%1000000007);
	system("pause");
	return 0;
}