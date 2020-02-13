//看网上的。
//https://blog.csdn.net/wanmeiwushang/article/details/51622047

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[N+5],b[N+5],c[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+N);
    int count=0;
    int temp=0,max=0;
    for(int i=0;i<N;i++){
        if(max<b[i]) max=b[i];    //把最大值保存下来    
        if(a[i]==b[i]&&a[i]==max){//如果可能是主元，而且是最大值，则确定是主元 
        c[count++]=a[i];
        }
    }
    cout<<count<<endl;
    if(count==0) cout<<endl;    //如果主元个数是0，空行还是要输入的 
    for(int i=0;i<count;i++){
            if(i!=0)
            cout<<" ";
            cout<<c[i];
    }
    return 0;
}

