/*
 * 水题
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>

int main(){
    int N,M;
    scanf("%d %d",&N,&M);

    int fullscore[M],fullresult[M],temp[M];

    for(int i=0;i<M;i++)scanf("%d",&fullscore[i]);
    for(int i=0;i<M;i++)scanf("%d",&fullresult[i]);

    for(int i=0;i<N;i++){
        int sum=0;
        for(int j=0;j<M;j++){
            scanf("%d",&temp[j]);
            if(temp[j]==fullresult[j]){
                sum+=fullscore[j];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}