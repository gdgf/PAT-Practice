#include<iostream>
using namespace std;
int charge(char &a){
    if(a=='B')
        a=0;
    if(a=='C')
        a=1;
    if(a=='J')
        a=2;
}

int main(){
    char mp[3]={'B','C','J'};
    int flag1=0,flag2=0;
    int n;
    cin>>n;
    char a,b;
    int count1[3]={0}; // 0、1、1分别用来保存赢平输
    int count2[3]={0};
    int label1[3]={0}; //数量
    int label2[3]={0};

    while(n--){
        cin>>a>>b;
        charge(a);
        charge(b);
        if(a==b){
            count1[1]++;
            count2[1]++;
        }
        if((a+1)%3==b){   //甲赢 
            count1[0]++; 
            count2[2]++;
            label1[a]++;
        }
        if((b+1)%3==a){   //乙赢 
            count1[2]++;
            count2[0]++; 
            label2[b]++;
        }                   
    }
    
    for(int i=0;i<=2;i++){
        cout<<count1[i];
        if(i!=2)
            cout<<" ";
        else
            cout<<endl;
    }

    for(int i=0;i<=2;i++){
        cout<<count2[i];
        if(i!=2)
            cout<<" ";
        else
            cout<<endl;
    }

    for(int i=0;i<=2;i++){
        if(label1[i]>label1[flag1])
            flag1=i;
        if(label2[i]>label2[flag2])
            flag2=i;
    }

    cout<<mp[flag1]<<" "<<mp[flag2]<<endl;
    system("pause");
    return 0;
}
