#include<cstdio>
#include<cstring>
char str[10001];
int main(){
    int P=0,A=0,T=0,e=0,s=0,t=0;
    //char str;
    scanf("%s",str);
    //printf("%d\n",strlen(str));
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='P')P++;
        else if(str[i]=='A')A++;
        else if(str[i]=='T')T++;
        else if(str[i]=='e')e++;
        else if(str[i]=='s')s++;
        else if(str[i]=='t')t++;
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
