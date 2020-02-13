/*
10
60 75 90 55 75 99 82 90 75 50
3 75 90 88
*/
#include<cstdio>
#include<cstring>
int score[100000];
int scoreT[100000];
int scoreT1[100000];
int main(){
    int N,n;
    memset(score,0,sizeof(score));
    memset(scoreT,0,sizeof(scoreT));
    memset(scoreT1,0,sizeof(scoreT1));
    scanf("%d",&N);
    
    for(int i=0;i<N;i++)
        scanf("%d",&score[i]);
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&scoreT[i]);
    
    for(int i=0;i<N;i++){
        for(int j=0;j<n;j++){
            if(scoreT[j]==score[i]){
                scoreT1[j]++;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",scoreT1[i]);
    }
    printf("%d",scoreT1[n-1]);
    return 0;
}

