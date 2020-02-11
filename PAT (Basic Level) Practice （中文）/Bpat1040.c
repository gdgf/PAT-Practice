#include<stdio.h>
#include<string.h>
int main()
{
    long int i,countt=0,countp=0,sum=0;//测试点3和4是定义成长整型变量；
    char ch[100001];//因字符串长度不超过10^5；
    gets(ch);
    for(i=0;i<strlen(ch);i++)
    {
       if(ch[i]=='T') 
            countt++;
    }
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='P') countp++;
        else if(ch[i]=='T') 
            countt--;
        else if(ch[i]=='A') 
            sum=sum+countp*countt;
    }
    printf("%d",sum%1000000007);
    return 0;
}
