/*
 * 这个题目并没有涉及到大数计算
 * 只是简单的进行加法，然后把结果变成相应的进制，通过取余、保存余数、
 *     取整即可。
 */
#include<iostream>
using namespace std;
int main(){
    int A,B,C,d;
    cin>>A>>B>>d;
    C=A+B;
    int s[111]; //保存每次的余数
    int i=0;
    if(C==0){
        cout<<0;
    }else{
        while(C!=0){
            s[i++]=C%d;  //取余
            C=C/d;  //取整
        }
    }
    for(int j=i-1;j>=0;j--){  //反向输出
        cout<<s[j];
    }

    return 0;
}