/*
 * 部分正确
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
int isSimple(int a,int b){
    int temp=0;
    if(a>b){
        temp=b;
    } else{
        temp=a;
    }
    for(int i=2;i<=temp;i++){
        if(a%i==0 && b%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int N1,M1,N2,M2,K;
    scanf("%d/%d %d/%d %d",&N1,&M1,&N2,&M2,&K);
    int X1,X2;

    X1=K*N1%M1;
    if(X1!=0){
        X1=K*N1/M1+1;
    }else{
        X1=K*N1/M1;
    }
    X2=K*N2/M2;
    for(int i=X1;i<=X2;i++){

        if(isSimple(i,K) && (i-X1)==0){
            printf("%d/%d",i,K);
        }else if(isSimple(i,K)){
            printf(" %d/%d",i,K);
        }
    }
    return 0;
}