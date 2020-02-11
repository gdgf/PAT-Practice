/*
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
*/
#include<cstdio>
int main(){
    int N,K,score;
    int gardes[101]={0}; //从0-100分，每个分数的人数
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&score);
        gardes[score]++; //这一步是精髓。利用了数组小标。
    }
    scanf("%d", &K);
    for(int i=0;i<K;i++){
        scanf("%d",&score);
        //应对“中间以空格分隔，但行末不得有多余空格” 的办法。
        if(i!=0){
            printf(" "); 
        }
        printf("%d", gardes[score]);
    }
    return 0;
}

