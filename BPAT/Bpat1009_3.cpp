//方法三
#include<stdio.h>
int main(){
    char str[50][30];
    int i=0;
    while(scanf("%s",str[i])!=EOF){
        i++;
    }
    
    for(i--;i>=0;i--){
        printf("%s",str[i]);
        if(i>0)printf(" ");
    }
    return 0;
}