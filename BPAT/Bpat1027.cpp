/*
 打印沙漏
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    int sum=1;
    int x=0;
    for(int i=3;;i=i+2){
        if((sum+i*2)<=n){
            sum=sum+i*2;
            x=i;  //行/列数
        }
        else{
             break;
        }
    }
    //cout<<"x="<<x<<endl;
    int rest=n-sum;
    int l=0;
    int k=x;
    int k1=1;
   // cout<<sum<<" "<<rest<<endl;
   //太少时
   if(n<7){
       cout<<c<<endl;
   }
    for(int m=0;m<x;m++){
        if(m<x/2+1){
            l=m;
            for(int j=0;j<l;j++)
                cout<<" ";
            for(int i=k;i>=1;i--){
                cout<<c;
            }
            k=k-2;
            cout<<endl;
        }else{
            k1+=2;
            //cout<<"k="<<k<<endl;
            l=x-m-1;
            for(int j=0;j<l;j++)
                cout<<" ";
            for(int i=1;i<=k1;i++){
                cout<<c;
            }
            cout<<endl;
        }
    }
    cout<<rest<<endl;
    return 0;
}