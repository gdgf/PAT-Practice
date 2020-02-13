#include<cstdio>
#include<cstring>
#include<iostream>


struct Team
{
	int sum = 0;     //这个组中的成员的个数
	int score = 0;   //这个组的得分
};
Team team[1001];     //1001是组数，0什么都不能代表。

//得到组号。
int getTeam(char *team) {
	char str[10] = {' '};  
	int d = 0;
	for (int i = 0; i < strlen(team); i++) {
		if (team[i] == '-') {
			break;
		}
		else {
			str[i] = team[i];
		}
	}
	//sscanf(str, "%d", d);
	//printf("%s", str);
	sscanf(str, "%d", &d);
	//printf("")
	return d;
}

int main() {
	int N, score, k = 0;
	char member[10];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s %d", member, &score);
		k = getTeam(member);
		team[k].score += score;
		team[k].sum++;
	}
	int maxScore = 0, maxTeam = 0;
	/*
	for (int i = 0; i < 1001; i++) {
		printf("%d %d\n", team[i].sum, team[i].score);
	}
	*/
	for (int i = 0; i < 1001; i++) {
		if (maxScore < team[i].score) {
			maxScore = team[i].score;
			maxTeam = i;
		}
	}
	printf("%d %d", maxTeam, maxScore);
	system("pause");
	return 0;
}