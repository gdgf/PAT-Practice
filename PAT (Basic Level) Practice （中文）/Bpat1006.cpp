#include<iostream>
using namespace std;
int main(){
    char array[2]={'B','S'};
    int n;
    cin>>n;
    int n1,n2;
    n1=n/100;
    n=n-n1*100;
    n2=n/10;
    n=n-n2*10;
    for(int i=0;i<n1;i++)
       cout<<array[0];
    for(int i=0;i<n2;i++)
        cout<<array[1];
    for(int i=1;i<=n;i++)
        cout<<i;
    return 0;
}
