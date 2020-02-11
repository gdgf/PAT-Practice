#include<iostream>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

int haveFalse(string P){
    for(int i=0;i<P.size();i++){
        //这里的条件刚开始搞错了
        if(!((P[i] >= '0' && P[i] <= '9') || (P[i] >= 'a' && P[i] <= 'z') || (P[i] >= 'A' && P[i] <= 'Z') || (P[i] == '.')) ){ //如果不合法
            return  1;
        }
    }
    return 0;   //合法
}

void  count(string P,int *a, int *b){
    for(int i=0;i<P.size();i++){
        if((P[i]>='0'&& P[i]<='9')){
            (*a)++;
        }else if((P[i]>='a' && P[i]<='z') || (P[i]>='A' && P[i]<='Z')){
            (*b)++;
        }
    }
}

int main() {
    int N;
    cin>>N;
    getchar();
    string password;
    for(int i=0;i<N;i++){
        getline(cin,password);
        int number=0,character=0;
        count(password,&number,&character);
        if(password.size()<6){
            cout<<"Your password is tai duan le."<<endl;
        }else if(haveFalse(password)){
            cout<<"Your password is tai luan le."<<endl;
        }else if(number==0){
            cout<<"Your password needs shu zi."<<endl;
        }else if(character==0){
            cout<<"Your password needs zi mu."<<endl;
        }else{
            cout<<"Your password is wan mei."<<endl;
        }
    }
    return 0;
}

