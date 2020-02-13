/*
 * 给定一个链表L,将其中的每K个节点进行反转
 * 不到K个元素不反转
 */
#include<iostream>
#include<cstdio>
using namespace std;
struct List{
    int add;
    int data;
    int next;
}
int main(){
    freopen("./data/in,txt","r",stdin);
    int N,K,Add;
    cin>>Add>>N>K;
    List *list=new List(N); 
    for(int i=0;i<N;i++){
        cin>>list[i].add>>list[i].data>>list[i].next;
    }
    



    return 0;
}