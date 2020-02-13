/*
 *  乱七八糟的一个代码
 */
#include<iostream>
#include <string>
#include<algorithm>
#include <cstring>
#include <cmath>
using namespace std;

struct Info{
    int cha=0;
    int count=0;
};
int cmp(Info a ,Info b){
    return a.cha>b.cha;
}
int main() {
    int N;
    cin>>N;
    int num[N];
    int cha[N];
    //计算重复次数
    int m[10001]={0};
    Info info[N];
    for(int i=0;i<N;i++) {
        cin >> num[i];
        cha[i] = abs(num[i] - i-1);
        m[cha[i]]++;
    }

    int count=0,K= sizeof(m)/ sizeof(int);
    //cout<<K<<endl;

    for(int i=0;i<K;i++){
        if(m[i]>0){

            info[count].cha=i;
            info[count].count=m[i];
            count++;
        }
    }
    sort(info,info+N,cmp);

    for(int i=0;i< N && info[i].count>1;i++) {
        cout<<info[i].cha<<" "<<info[i].count<<endl;
    }
    return 0;
}