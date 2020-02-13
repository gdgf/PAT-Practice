//数组越界，还有问题。
/*

注意的地方：
对于字符串大小的比较，用strcmp
	如果要忽略大小进行比较，linux 用strcasecmp, 头文件为strings.h
						windows用stricmp， 头文件为string.h

*/

#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>

struct Student {
	char id[6];
	int score;
	char school[6];
};
Student student[100001];

struct School {
	char name[6] = "";
	int score = 0;
	int peoplesum = 0;
};
School school[100001];


//排名，先根据成绩排名，然后根据总人数排名，最后根据学校名称排名 。
bool cmp(School S1,School S2) {
	if (S1.score != S2.score) {
		return S1.score > S2.score;
	}
	else {
		if (S1.peoplesum !=S2.peoplesum) {
			return S1.peoplesum < S2.peoplesum;
		}
		else {
			if (strcmp(S1.name, S2.name)>0) {
				return true;
			}
			else {
				return false;
			}
			//return strcmp(S1.name,S2.name);
		}
	}
}

//改变大小写。
void change(char *str) {
	char str1[6]="";
	char ch;
	for (int i = 0; i < 6; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			str1[i] = str[i] + 32;
		}
		else {
			str1[i] = str[i];
		}
	}
	//return str1;
	strcpy(str, str1);
}
int main() {
	int N;
	scanf("%d", &N);
	int m = 0;     //统计学校的数量。
	for (int i = 0; i < N; i++) {
		scanf("%s %d %s", student[i].id, &student[i].score, student[i].school);
		int j = 0;
		//当前学生所在的学校信息已经保存，只需找到这个学校，然后将这个学生的成绩加入。        
		for (j = 0; j < m; j++) {
			if (stricmp(student[i].school, school[j].name) == 0) {
				if (student[i].id[0] == 'B') {
					school[j].score += student[i].score / 1.5;
				}
				else if (student[i].id[0] == 'A') {
					school[j].score += student[i].score;
				}
				else {
					school[j].score += student[i].score*1.5;
				}
				school[j].peoplesum++;
				break;
			}
		}
		//这个学生的学校信息还没有保存,则添加这个学校的信息，并保存这个学生的信息。
		if (j==m) {
			strcpy(school[m].name, student[i].school);  //学校名
			if (student[m].id[0] == 'B') {
				school[m].score += student[i].score / 1.5;
			}
			else if (student[i].id[0] == 'A') {
				school[m].score += student[i].score;
			}
			else {
				school[m].score += student[i].score*1.5;
			}
			school[m].peoplesum++;
			m++;
		}
	}
	printf("%d\n", m);
	std::sort(school, school + m, cmp);

	int k = 1;         //记录顺序
	for (int i = 0; i < m; i++) {	
		//第一个肯定是0；
		if (i == 0) {
			printf("%d ", k);
		}
		else {
			//分数和前面一个相等，则和前一个的排名相等。
			if (school[i].score == school[i - 1].score) {
				printf("%d ", --k);
			}
			//分数和前面一个不相等，则输出它的本身顺序。
			else {
				printf("%d ", i+1);
				k = i+1;       //前一个的顺序也要修改。
			}
		}
		change(school[i].name);
		printf("%s %d %d\n", school[i].name, school[i].score, school[i].peoplesum);
		k++;
	}
	//system("pause");

	return 0;
}