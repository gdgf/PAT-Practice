#include <cstdio>
#include<cstring>
#include<iostream>
int main()
{
	char str;
	int temp;
	int alphabet[26] = { 0 };
	while (scanf("%c", &str) != EOF)
	{
		//printf("%d\n", str);
		// printf
		if ('A' <= str && str <= 'Z') {
			temp = str - 'A';
			//printf("%d\n", temp);
			alphabet[temp]++;
		}
		else if ('a' <= str && str <= 'z') {
			temp = str - 'a';
			//printf("%d\n", temp);
			alphabet[temp]++;
		}
	}
	int maxnum = 0;
    int k=0;
	for (int i = 0; i < 26; i++) {
		if (maxnum < alphabet[i]) {
			maxnum = alphabet[i];
            k=i;
		}
	}
    
	//printf("%d", maxnum);
	printf("%c %d", k+'a', alphabet[k]);
	system("pause");
	return 0;
}