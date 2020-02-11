// 参考网络
#include<cstdio>
#include<iostream>
#include<cstring>
#include<map>
#include<cmath>
using namespace std;

map<int, int> vis;
int s[1001][1001];
int n, m ,tol;

//常用的一种手段
int dir[8][2] = {1,0, -1,0, 0,1, 0,-1, 1,1, 1,-1, -1,1, -1,-1};

//判断是否大于阈值
bool check(int x, int y)
{
    for(int i=0 ;i<8 ;i++){
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(xx>=0 && xx<n && yy<m && yy>=0 && abs(s[xx][yy]-s[x][y])<=tol ) return false;
    }
    return true;
}

int main(){
    cin>>m>>n>>tol;

    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
            cin>>s[i][j];
            vis[s[i][j]] ++;
        }
    }
    //cnt记录只出现一次的数字的个数
    //x y记录坐标
    
    int cnt = 0;
    int x, y;
    for(int i=0 ;i<n ;i++){
        for(int j=0 ;j<m ;j++){
            if(vis[s[i][j]]==1 && check(i,j)){
                cnt++;
                x = i;
                y = j;
            }
        }
    }
    
    if(cnt==1){
        printf("(%d, %d): %d\n",y+1, x+1, s[x][y]);
    }
    else if(cnt>1){
        puts("Not Unique");
    }
    else{
        puts("Not Exist");
    }

    return 0;
}