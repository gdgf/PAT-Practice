//相比前一个，占用内存更少一点。
#include<cstdio>
#include<cstring>
//char str[10001];
int main(){
    int P=0,A=0,T=0,e=0,s=0,t=0;
    char str;
    scanf("%s",str);
    //printf("%d\n",strlen(str));
    while(scanf("%c",&str)!=EOF){
        if(str=='P')P++;
        else if(str=='A')A++;
        else if(str=='T')T++;
        else if(str=='e')e++;
        else if(str=='s')s++;
        else if(str=='t')t++;
    }
    //printf("%d %d %d %d %d %d\n",P,A,T,e,s,t);
    int num=P+A+T+e+s+t;
    while(P>0||A>0||T>0|e>0|s>0|t>0){
        if((P--)>0)printf("P");
        if((A--)>0)printf("A");
        if((T--)>0)printf("T");
        if((e--)>0)printf("e");
        if((s--)>0)printf("s");
        if((t--)>0)printf("t");
    }  
    return 0;
}
