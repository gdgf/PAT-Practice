#include<cstdio>
#include<cstring>
int main(){
    char A[10001],B[10001],C[62]={0};
    scanf("%s",A);
    scanf("%s",B);
    for(int i=0;i<strlen(B);i++){
        for(int j=0;j<strlen(A);j++){
            if(A[i]==B[j]&&C[i]==0) C[A[i]]=1; 
        }
        
    }
    //printf("Yes %d %d %d\n",strlen(A),strlen(B),strlen(A)-strlen(B));
    printf("Yes %d\n",strlen(A)-strlen(B));
    return 0;
}