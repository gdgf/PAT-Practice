/*
 *  变为字符串处理 
 */
#include<iostream>
using namespace std;
int main(){
    char array[2]={'B','S'};
    string str;
    cin>>str;
    int n=str.size();
    //这里有点复杂了，还没有优化
    if(n==1){    
        for(int i=1;i<=str[0]-'0';i++)
            cout<<i;
    }else if(n==2){
        for(int i=0;i<str[0]-'0';i++)
            cout<<array[1];
        for(int i=1;i<=str[1]-'0';i++)
            cout<<i;
    }else if(n==3){
        for(int i=0;i<str[0]-'0';i++)
            cout<<array[0];
        for(int i=0;i<str[1]-'0';i++)
            cout<<array[1];
        for(int i=1;i<=str[2]-'0';i++)
            cout<<i;
    }
    system("pause");
    return 0;
}