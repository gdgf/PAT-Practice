// 水题

#include<iostream>
#include <string>
#include<algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin>>N;
    string ID,ID1,ID2;
    int x,y,max=0,min=100000;
    for(int i=0;i<N;i++){
        cin>>ID>>x>>y;
        int temp=sqrt(x*x+y*y);
        if(temp<min){
            min=temp;
            ID1=ID;
        }
        if(temp>max){
            max=temp;
            ID2=ID;
        }
    }
    cout<<ID1<<" "<<ID2<<endl;

    return 0;
}

