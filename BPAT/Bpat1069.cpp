/*
来源于网络
*/

#include <cstdio>
#include <string>
#include <iostream>
#include <map>
using namespace std;

const int N=1500;
char a[N][N];     //已经输出过的就不再输出了

int main()
{
    map<string,int > mp;
    int i,n,m,k,t;
    scanf("%d%d%d",&n,&m,&k);

    for(i=1;i<=n;i++){
        scanf("%s",a[i]);
    }

    if(k>n){          //给出的数超出范围
        cout<<"Keep going..."<<endl;
    }else{
        cout<<a[k]<<endl;     //没有超出范围，先把第一个数输出
        mp[a[k]]=1;
        t=k+m;                //t为间隔k个数的下标
        while(t<=n){
            if(mp[a[t]]==0){    //去重，已输出过的不在输出
                mp[a[t]]=1;
                cout<<a[t]<<endl;
                t=t+m;         //继续间隔k个数
            }else{              //如果已经输出过了，就输出它的下一个
                t=t+1;
            }
        }
    }
    return 0;
}