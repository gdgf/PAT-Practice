#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    cin>>x;
    int j,k;
    char zhegnfu1,zhegnfu2;
    char xm[1000],xm1[1000];
    for(int i=0;i<x.size();i++){
        zhegnfu1=x[0];
        if(x[i]=='E'){
            j=i;
            zhegnfu2=x[i+1];
            break;
        }
    }
    for(int i=1;i<=j-1;i++){
        xm[i-1]=x[i];
        cout<<xm[i-1]<<endl;
    }
    for(int i=j+2;i<x.size();i++){
        xm1[i-j-2]=x[i];
        cout<<xm1[i-j-2]<<endl;
    }

    double a=stod(xm);
    cout<<"a"<<a<<endl;
    int b=atoi(xm1);
    for(int i=0;i<b;i++){
        if(zhegnfu2=='+'){
            a=a*10;
        }else{
            a=a/10;
        }
    }
    string m=to_string(a);
    if(zhegnfu1=='+'){
        cout<<m<<endl;
    }else{
        cout<<zhegnfu1<<m;
    }
    return 0;
}
