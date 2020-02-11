#include<cstdio>
#include<iostream>
#include<set>
#include<map>
using namespace std;
struct info{
    string name;
    int data[100];
    int count=0;
};
int main(){
    int N,M;
    cin>>N>>M;
    //scanf("%d %d",&N,&M);
    set<int> goods;
    for(int i=0;i<M;i++){
        int temp;
        cin>>temp;
        goods.insert(temp);
    }
    int sum=0;
    //map<string,int> data;
    info data[N];
    int falg[N]={0};
    for(int i=0;i<N;i++){
        string name;
        int n;
        cin>>name>>n;
        //scanf("%d",&n);
        int temp[n];
        for(int j=0;j<n;j++){
            scanf("%d",&temp[j]);
            if(goods.find(temp[j])){  //货物在其中
                info[sum].name=name;
                info[sum].data[info[sum].count]=temp[j];
                info[sum].count++;
                sum++;
            }
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<sum;i++){
        cout<<info[i].name<<" "info[i].count<<endl;
    }
    system("pause");
    return 0;
}
