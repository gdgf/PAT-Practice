//数字的倒序输出

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    int a,b,c,N=0;
    cin>>a>>b;
    c=a*b;

    while(c){
        N=c%10+10*N;  //
        c/=10;
    }
    cout<<N<<endl;
    system("pause");

    return 0;
}