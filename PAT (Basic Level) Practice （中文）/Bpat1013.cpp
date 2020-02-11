/*
 写出地i~j个素数
*/

#include<iostream>
#include<cstdio>
#include "cmath"
using namespace std;
bool sushu(int x){
    if(x<=3)
        return true;
    int sq=(int)sqrt(x);
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
        if(sushu(i)){
            n++; //素数计数
            //
            if(n<M) continue;

            if((n-M+1)%10==1){
                cout<<i;

            }else{
                 cout<<" "<<i;
            }
            if((n-M+1)%10==0){
                cout<<"\n";
            }
            //素数最大个数
            if(n==N) //结束
                break;
        }else continue;

    }
    return 0;
}