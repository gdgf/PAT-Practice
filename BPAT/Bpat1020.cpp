//注意数据格式，直接设为double为好
#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
struct MoonCake{
    double num;
    double price;
};

//根据单价由高到低进行排序
bool cmp(MoonCake cake1,MoonCake cake2){
    return cake1.price/cake1.num > cake2.price/cake2.num;
}
int main(){
    int N,D;
    cin>>N>>D;
    MoonCake cake[N];

    for(int i=0;i<N;i++){
        cin>>cake[i].num;
    }
    for(int i=0;i<N;i++){
        cin>>cake[i].price;
    }
    sort(cake,cake+N,cmp);

    double sum=0,cost=0;

    for(int i=0;i<N;i++){
        sum=sum+cake[i].num;
        if(sum>=D){ //超过
            double temp=cake[i].price/cake[i].num * (sum-D);  //多算的钱
            cost=cost+cake[i].price-temp;
            break;
        }else{  //不够
            cost+=cake[i].price;
        }            
    }
    printf("%.2lf",cost);   
    return 0;
}