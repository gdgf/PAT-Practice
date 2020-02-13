#include<iostream>
using namespace std;
int main(){
    char array[2]={'B','S'};
    int n;
    cin>>n;
    int A[3];
    for(int i=2;i>=0;i--){
        A[i]=n%10;
        n/=10;
    }
    for(int i=0;i<A[0];i++)
       cout<<array[0];
    for(int i=0;i<A[1];i++)
        cout<<array[1];
    for(int i=1;i<=A[2];i++)
        cout<<i;
    system("pause");
    return 0;
}