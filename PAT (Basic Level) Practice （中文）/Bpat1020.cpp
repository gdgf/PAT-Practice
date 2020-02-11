/*
 * 
 * 贪心算法解决
 * 结构体排序：用内置排序时的解决方案
 *     只需给结构体的头指针和尾指针
 * 还是有部分错误
 */
#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct MoonCake{
    int num;
    int price;
};
bool comp(MoonCake cake1,MoonCake cake2){
    if(((double)cake1.price/cake1.num)>((double)cake2.price/cake2.num)){
        return true;
    }else{
        return false;
    }
}
int main(){
    int N,D;
    cin>>N>>D;
    MoonCake *cake=new MoonCake[N];
    for(int i=0;i<N;i++){
        cin>>cake[i].num;
    }
    for(int i=0;i<N;i++){
        cin>>cake[i].price;
    }
    sort(cake,cake+N,comp);
   
    int sum=0;
    double cost=0;
    for(int i=0;i<N;i++){
        sum=sum+cake[i].num;
        if(sum>=D){
            double temp=(double)cake[i].price*(sum-D)/cake[i].num;
            cost=cost+cake[i].price-temp;
           // cout<<cost<<endl;
            break;
        }else{
            cost+=cake[i].price;
            //cout<<cost<<endl;
        }            
    }
    //cout<<cost<<endl;
    printf("%.2lf",cost);   
    return 0;
}