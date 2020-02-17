//
// Created by gdgf on 18-12-8.
//

#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(c<0) cout<<'-';
    c=abs(c);
    char s[20];
    sprintf(s,"%d",c);   //将数字变成字符串
    int len=strlen(s);   //长度

    //if(len<=3) {cout<<s;return 0;}
    int m=len/3;//有多少个３
    int n=len%3;//不是整数３的部分
    int start=0;//输出开始的位置

    //对ｍ的思考
    /*
     * 如果结果在３个数字以内，ｍ为０；
     * 如果结果为３，怎ｍ=1;
     * 如果结果>3，怎ｍ>1
     * ０－３之内的数字可以单独输出，其余的直接输出
     */

    //cout<<"m="<<m<<' '<<"n="<<n<<endl;
    if(n==0) {//三个数字，直接输出
        cout<<s[0]<<s[1]<<s[2];
        start=3;
        m--;
    }
    else if(n==1) {//余数为１，只有一个数字
        cout<<s[0];
        start=1;
    }
    else if(n==2) {//两个数字
        cout<<s[0]<<s[1];
        start=2;
    }


    while(m!=0){//
        cout<<',';
        cout<<s[start]<<s[start+1]<<s[start+2];
        start+=3;
        m--;
    }
    return 0;
}