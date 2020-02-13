#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct people{
    char name[10];
    int height;
}arr[10005];

bool cmp(people A,people B){
    if(A.height!=B.height) return A.height<B.height;
    else return strcmp(A.name,B.name)>0;
}
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i=0;i<N;i++){//输入
        getchar();//吸收上一行的换行符
        scanf("%s %d",arr[i].name,&arr[i].height);
    }
    sort(arr,arr+N,cmp);//排序
    //让储存从下标1开始

    people data[N/K*3];
    int flag=N-1;
    for(int i=K;i>=1;i--){//K排
        int left=1,right=N/K;
        if(i==K) right=N/K+N%K;
        int mid=right/2+1;
        int l=mid-1,r=mid+1;
        data[mid]=arr[flag--];
        while(l>=left||r<=right){
            if(l>=left){
                data[l--]=arr[flag--];
            }
            if(r<=right){
                data[r++]=arr[flag--];
            }

        }
        for(int j=1;j<=right;j++){
            if(j!=1) printf(" ");
            printf("%s",data[j].name);
            if(j==right&&i!=1) printf("\n");
        }
    }
    getchar();
    return 0;
}