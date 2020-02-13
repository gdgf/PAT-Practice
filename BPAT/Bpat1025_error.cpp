/*
 * 给定一个链表L,将其中的每K个节点进行反转
 * 不到K个元素不反转
 */
#include<iostream>
#include<cstdio>
using namespace std;
struct nList{
    int add;
    int data;
    int next;
};
int main(){
    freopen("./data/in,txt","r",stdin);
    int N,k,Add;
    cin>>Add>>N>>k;
    nList *list=new nList[N]; 
    
    for(int i=0;i<N;i++){
        cin>>list[i].add>>list[i].data>>list[i].next;
    }
    for(int i=0;i<N;i++){
        cout<<list[i].add<<list[i].data<<list[i].next<<endl;
    }

    /*
    int x1=N/k;
    //int x2=N%k;
    int f=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<x1*k;j++){
            if((j+1)%k!=0){
                continue;
            }else{
                for(int n=j;n>=f;n--){
                    cout<<list[n].add<<list[n].data<<list[n].next<<endl;
                }
                f=j-k+1;
            }
            
        }
        for(int m=N-1;m>x1*k;m--){
            cout<<list[m].add<<list[m].data<<list[m].next<<endl;
        }
    }
    */
    fclose(stdin);
    
    return 0;
}