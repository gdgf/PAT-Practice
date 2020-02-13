#include<iostream>
using namespace std;
int main(){
    char c;
    int coefficient,index;
    int flag=1;
    while(cin>>coefficient>>index){
        if(index>0){
            if(flag==1){ //对于第一个数
                cout<<coefficient*index<<" "<<index-1;
                flag=0;
            }else{
                cout<<" "<<coefficient*index<<" "<<index-1;
            }
        }
        if((c = getchar())=='\n')
            break;
    }
    if(flag==1){
        cout<<"0 0";
    }
    return 0;
}
