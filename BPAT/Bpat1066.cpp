/*
 * 水题
 * 注意一般用scanf，printf, cin和cout可能会超时
 */
#include<cstdio>
int main()
{
    int N,M,A,B,k;
    //cin>>M>>N>>A>>B>>k;
    scanf("%d %d %d %d %d",&M,&N,&A,&B,&k);
    int pixel[M][N];
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&pixel[i][j]);
            if(pixel[i][j]<=B && pixel[i][j]>=A){
                pixel[i][j]=k;
            }
            if(j==0)
                printf("%03d",pixel[i][j]);
            else
                printf(" %03d",pixel[i][j]);
        }
        printf("\n");
    }
    return 0;
}