#include<cstdio>
#include<algorithm>
int num[100001];

int cmp(int a,int b){
    return a<b;
}
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",num[i]);
    
    std::sort(num,num+N,cmp);
    for(int i=0;i<N;i++){
        printf("%d ",num[i]);
    }

    return 0;
}