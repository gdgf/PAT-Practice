#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

map<char,bool>bad;
char b[100],s[100005];
int main()
{
    scanf("%s",b);
    int x=scanf("%s",s);
    if(x!=1){printf("%s",b);return 0;}
    int k=-1;
    while(b[++k])
    {
        bad[b[k]]=1;
    }
    k=-1;
    while(s[++k])
    {
        if(bad['+']&&s[k]>='A'&&s[k]<='Z')continue;
        char tmp=s[k];
        if(tmp>'_')tmp-=32;
        if(!bad[tmp])printf("%c",s[k]);
    }
    return 0;
}