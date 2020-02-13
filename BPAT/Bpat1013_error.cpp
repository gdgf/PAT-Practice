/*
 * 有错误，还没有找出来
 * 找到第M~N个素数
 */
#include<iostream>
#include<fstream>
#include<cstdio>
#include <cmath>
using namespace std;

bool isprime(int x){
    if(x<=1)
        return true;
    int sq=(int)sqrt(x*1.0);
    for(int i=2;i<=sq;i++){
        if(x%i==0)
            return false;
    }
    return true;
}

int main(){
    int M,N,n=0;
    cin>>M>>N;
    for(int i=2;i<=10000;i++){
        if(isprime(i)){
            n++; //素数计数
            if(n<M) continue;
            //每10个换一次行
            if((n-M+1)%10==1){   //第一个
                cout<<i;
            }else{
                 cout<<" "<<i;
            }
            
            if((n-M+1)%10==0){
                cout<<endl;
            }
            //素数最大个数
            if(n==N) //结束
                break;
        }
    }
    system("pause");
    return 0;
}