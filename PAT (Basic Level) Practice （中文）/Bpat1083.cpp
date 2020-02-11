#include<iostream>
#include <string>
#include<algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin>>N;
    int x,cha=0;
    //计算重复次数
    int m[10001]={0};
    //Info info[N];
    int max=0;
    for(int i=0;i<N;i++) {
        cin >> x;
        cha = abs(x - i-1);
        m[cha]++;
        if(cha>max){
            max=cha;
        }
    }

    for(int i=max; i>=0;i--){
        if(m[i]>=2){
            cout<<i<<" "<<m[i]<<endl;
        }
    }
    system("pause");
    return 0;
}