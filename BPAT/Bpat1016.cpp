/*
 * 给定 A=3862767，DA=6，则 A 的“6 部分”PA是 66，因为 A 中有 2 个 6。
 * 计算 PA+PB
 * 字符串的输入，输出问题，
 * 字符，与数字之间的转化问题。
 */
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int LEN=100000;

int main(){
    char A[LEN],B[LEN];
    char  pa,pb;

    cin>>A>>pa>>B>>pb;

    int x1=0,x2=0;
    //pa的个数
    for(int i=0;i<strlen(A);i++){
        if(A[i]==pa)
          x1++;
    }
    //pb的个数
    for(int i=0;i<strlen(B);i++){
        if(B[i]==pb)
          x2++;
    }
    //求和
    int a=pa-'0';
    int b=pb-'0';
    int sum1=0,sum2=0;
    
    //x1个a构成的数的值
    for(int i=0;i<x1;i++){
       sum1=sum1+a;
       a=a*10;
    }
    for(int i=0;i<x2;i++){
       sum2=sum2+b;
       b=b*10;
    }
    cout<<sum1+sum2<<endl;
    system("pause");
    return 0;
}