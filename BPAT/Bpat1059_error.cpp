#include<iostream>
#include<string>
#include <math.h>
using namespace std;
int ISPrime(int x){
    for(int i=2;i<=int(sqrt(x));i++) {
        if (x % i == 0)
            return 0;
    }
    if(x==1) return 0; //1不是素数
    return 1;
}

int flag[10000];
int main(){
    int N;
    scanf("%d",&N);
    int ID[N];
    for(int i=0;i<N;i++)
        scanf("%d",&ID[i]);
    int K;
    scanf("%d",&K);
    int checkID[K];
    for(int i=0;i< 10000;i++)flag[i]=0;

    for(int i=0;i<K;i++){
        scanf("%d",&checkID[i]);
        //从ID中查找。
        int j=0;
        for(j=0;j<N;j++){
            if(checkID[i]==ID[j]){
                if(flag[checkID[i]]!=0)
                    printf("%04d: Checked\n",checkID[i]);
                else if(j==0)
                    printf("%04d: Mystery Award\n",checkID[i]);
                else if(ISPrime(i))
                    printf("%04d: Minion\n",checkID[i]);
                else
                    printf("%04d: Chocolate\n",checkID[i]);
                flag[checkID[i]]=1;
                break;
            }
        }
        if(j==N)printf("%04d: Are you kidding?\n",checkID[i]);
    }
    return 0;
}


