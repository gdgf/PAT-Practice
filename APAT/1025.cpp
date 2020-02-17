#include<bits/stdc++.h>
using namespace std;
struct node
{
	long long name;
	int score;
	int local;
	int lrank;
}s[30050];
bool cmp(node a, node b){
	if(a.score != b.score)
		return a.score > b.score;
	return a.name < b.name;
}
int main() 
{
	int n;
	scanf("%d", &n);
	int now = 0;
	for(int i = 1; i <= n; i++)
	{
		int k ;
		scanf("%d", &k);
		int begin = now + 1;
		for(int j = 1;j <= k; j++)
		{
			++now;
			scanf("%lld %d",&s[now].name, &s[now].score);
			s[now].local = i;
		}
		sort(s + begin, s + now + 1,cmp); 
		int r = 1;
		for(int j = begin; j <= now; j++)
		{
			if(j > 1 && s[j].score != s[j - 1].score) 
				r = j- begin  + 1;
			s[j].lrank = r; 
		} 
	}
	sort(s + 1, s + 1 + now,cmp);
	printf("%d\n",now);
	int r = 1;
	for(int i = 1; i <= now; i ++)
	{
		if(i > 1 && s[i].score != s[i - 1].score) 
			r = i ;
		printf("%013lld %d %d %d\n",s[i].name, r,s[i].local,s[i].lrank);
	}	
    return 0;
}