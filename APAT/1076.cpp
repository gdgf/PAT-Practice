#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
vector<int> user[1001];
int N,L,ans;
int vis[1001];
struct node{
	int id;
	int level;
};
 
void bfs(int id){
	vis[id]=1;
	queue<node> q;
	struct node p,t;
	p.id=id;
	p.level=0;
	q.push(p);
	while(!q.empty()){
		t=q.front();
		q.pop();
//		cout<<t.id<<' '<<t.level<<endl;;
		if(t.level>L){
			break;
		}
		ans++;
		int tmp=t.id;
		for(int i=0;i<user[tmp].size();i++){
	//		cout<<user[tmp][i]<<endl;
			if(vis[user[tmp][i]]==0){
				vis[user[tmp][i]]=1;
				p.id=user[tmp][i];
				p.level=t.level+1;
				q.push(p);
			}
		}
	}
	return ;
}
 
int main(){
	int k;
	scanf("%d%d",&N,&L);
	for(int i=1;i<=N;i++){
		scanf("%d",&k);
		while(k--){
			int a;
			scanf("%d",&a);
			user[a].push_back(i);
		}
	}
	scanf("%d",&k);
	while(k--){
		int user_id;
		scanf("%d",&user_id);
		memset(vis,0,sizeof(vis));
		ans=-1;
		bfs(user_id);
		printf("%d\n",ans);
	}
	return 0;
}