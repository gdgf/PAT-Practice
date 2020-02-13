#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int result[10000*2];

int main(){
    int N;
    memset(result,-1,sizeof(result));
    cin>>N;
    for(int i=1;i<=N;i++){
        int temp=i/2+i/3+i/4+i/5;
        result[temp]++;
    }
    int count=0;
    for(int i=0;i<sizeof(result)/sizeof(int);i++){
        if(result[i]>-1){
            count++;
        }
    }
    cout<<count<<endl;
    system("pause");
    return 0;
}