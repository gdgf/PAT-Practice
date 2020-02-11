#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ID[n];
    long long sum[4]={0};
    int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    for(int i=0;i<n;i++){
       cin>>ID[i];
       
       for(int j=0;j<17;j++){
                   
           sum[i]=D[i][j]-'0'+;
       }
    }
    for(int i=0;i<n;i++){
       cout<<ID[i]<<" "<<sum[i]<<endl;

    }
    



    return 0;
}