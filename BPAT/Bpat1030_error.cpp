/* 
这个题还有错误
 想要在一个多重for循环中退出来，则可以把这一部分封成函数
 用return 退出。这里最后没有用到这种语法。
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N,p;
int getnum(int * list,int N){
    //从最小的数字开始选,遍历所有的数
    int m,M;
    int num=0;
    for(int i=0;i<N;i++){         //m移动的方向
        for(int j=N-1;j>=0;j--){  //M移动的方向
            m=list[i];
            M=list[j];
            if(i<j){
                if(M<=m*p){   //从满足条件的里面找出最大的
                    int k=j-i+1;
                    if(k>num){
                        num=k;
                    }
                }
            }
        }
    }
    return num;
}

int main(){
    cin>>N>>p;
    int list[N];
    for(int i=0;i<N;i++){
        cin>>list[i];
    }
    sort(list,list+N);
    int num=getnum(list,N);
    cout<<num<<endl;
    return 0;
}