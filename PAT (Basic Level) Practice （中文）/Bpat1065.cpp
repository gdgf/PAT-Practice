/*
 * 部分正确
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int F[100000]={-1};
int main()
{
    memset(F,-1, sizeof(F));
    int N;
    cin>>N;
    int id_B,id_G;
    for(int i=0;i<N;i++){
        cin>>id_B>>id_G;
        F[id_B]=id_G;
        F[id_G]=id_B;
    }

    int M;
    cin>>M;
    int P[M];
    int P1[M];
    for(int i=0;i<M;i++){
        cin>>P[i];
    }

    sort(P,P+M);

    int temp=0;
    for(int i=0;i<M;i++){

        if(F[P[i]]==-1){ //不存在对象,直接输出
            P1[temp]=P[i];
            temp++;
        }else{  //有对象,查看对象是否来了
            int j=0;
            for(j=0;j<M;j++){
                if(F[P[i]]==P[j] )  //对象来了
                    break;
            }
            //有对象，但对象没有来
            if(j>=M){
                P1[temp]=P[i];
                temp++;
            }
        }
    }
    cout<<temp<<endl;
    for(int i=0;i<temp;i++){
        if(i==0){
            cout<<P1[i];
        }else {
            cout << " " << P1[i];
        }
    }
    return 0;
}