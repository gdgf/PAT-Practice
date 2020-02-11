/*
 * 部分正确 
 */
#include<cstdio>
#include<iostream>
using namespace std;
struct list{
    int add;
    int data;
    int next;
};
int main(){
    int firstAd,N,K;
    scanf("%d%d",&firstAd,&N,&K);
    list L[N];
    list L1[N];
    int flag;
    int count1=0,count2=0,count3=0;    //负数、[0,K]、
    for(int i=0;i<N;i++){
        scanf("%d%d%d",&L[i].add,&L[i].data,&L[i].next);
        if(L[i].add==firstAd)
            flag=i;
        if(L[i].data<0){
            count1++;
        }else if(L[i].data<=K && L[i].data>=0){
            count2++;
        }else if(L[i].data>K){
            count3++;
        }
    };

    int count=0,k1=0,k2=count1,k3=count1+count2;
    while(1){
        if(L[flag].data<0)
        {
            if(k1-1>=0 && k1<=N-1)
                L1[k1-1].next=L[flag].add;
            if(k1==N-1){
                L1[k1].next=-1;
            }
            L1[k1].data=L[flag].data;
            L1[k1].add=L[flag].add;
            k1++;
            count++;
        }else if(L[flag].data>=0 && L[flag].data<=K){
            if(k2-1>=0 && k2<=N-1)
                L1[k2-1].next=L[flag].add;
            if(k2==N-1){
                L1[k2].next=-1;
            }
            //L1[k2-1].next=L[flag].add;
            L1[k2].data=L[flag].data;
            L1[k2].add=L[flag].add;
            k2++;
            count++;
        }else if(L[flag].data>K){    //k3=7;

            if(k3-1>=0 && k3<=N-1){
                L1[k3-1].next=L[flag].add;
            }
            if(k3==N-1){
                L1[k3].next=-1;
            }
            L1[k3].data=L[flag].data;
            L1[k3].add=L[flag].add;
            k3++;
            count++;
        }

        for(int i=0;i<N;i++){
            if(L[i].add==L[flag].next){
                flag=i;
                break;
            }
        }
        if(count==N){  //代表已经有count个数录入了
            break;
        }
    }
    for(int i=0;i<N;i++){
        if(L1[i].next==-1){
            printf("%05d %d %d\n",L1[i].add,L1[i].data,L1[i].next);
        }else
            printf("%05d %d %05d\n",L1[i].add,L1[i].data,L1[i].next);
    }
    //system("pause");
    return 0;
}