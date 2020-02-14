#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string x;
    cin>>x;

    int j,k;
    char zhegnfu1,zhegnfu2;
    string xm1,xm2;
    
    for(int i=0;i<x.size();i++){
        zhegnfu1=x[0];
        if(x[i]=='E'){
            j=i;  //记录E的位置
            zhegnfu2=x[i+1];
            break;
        }
    }
    int n1=0,n2=0;
    for(int i=1;i<=j-1;i++){
        xm1[i-1]=x[i];
        n1++;
    }
    for(int i=j+2;i<x.size();i++){
        xm2[i-j-2]=x[i];
        n2++;
    }
    cout<<zhegnfu1<<endl;
    cout<<zhegnfu2<<endl;

    /*
    for(int i=0;i<n1;i++)
        cout<<xm1[i];
    cout<<endl;
    for(int i=0;i<n2;i++)      
        cout<<xm2[i];
    cout<<endl;
    */

    double a;
    int b;
    istringstream iss(xm1);
    iss >> a;
    cout<<a<<endl;

    system("pause");
    return 0;
}
