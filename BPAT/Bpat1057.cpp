#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i, len, sum=0, one=0, zero=0;
    len=str.size();
    for(i=0;i<len;i++){
        if(str[i]>='A'&&str[i]<='Z')sum+=str[i]-'A'+1;
        else if(str[i]>='a'&&str[i]<='z')sum+=str[i]-'a'+1;
    }
    while(sum>0){
        if(sum%2==0){zero++;sum/=2;}
        else{one++;sum/=2;}
    }
    printf("%d %d",zero,one);
    return 0;
}