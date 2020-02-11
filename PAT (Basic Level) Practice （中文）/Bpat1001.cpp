#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("../data/in.txt","r",stdin);
    int n;
    int time=0;
    cin>>n;
    
    while(n!=1){
        time++;
        if(n%2==0)n=n/2;
        else{
            n=(3*n+1)/2;
        }
    }
    cout<<time<<endl;
    return 0;
}
