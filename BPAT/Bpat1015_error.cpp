/* 
 * 还有问题，需要改正。
 * 主要都看总分排名(降序)，总分相等,看德分(降序)，德分相等看id(升序)。
 * L:录取最低分,H:优先录取分
 * 1. 德分>=H、才分都>=H, 
 * 2. 德分>=H、才分<H, 德胜才排在1类考生之后。
 * 3. 德分<H、才分<H、德分>=才分, 才德兼亡、尚有德胜才,但排在2类考生之后  
 * 4. 排在3类考生之后
 */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//const int M=1000;

struct student{
    string id;
    int score1,score2,sum;
};

//student S1[M],S2[M],S3[M],S4[M];

bool cmp(student a,student b){
    if(a.sum==b.sum){
        if(a.score1==b.score1)
            return a.id < b.id;
        else 
            return a.score1>b.score1;
    }else{
        return a.sum > b.sum;
    }
}

int main()
{
    int N,min,max;
    //scanf("%d %d %d",&N,&min,&max);
    cin>>N>>min>>max;
    student S1[N+1],S2[N+1],S3[N+1],S4[N+1];
    
    int n1=0,n2=0,n3=0,n4=0;
    for(int i=0;i<N;i++){
        string id;
        int a,b;
        cin>>id>>a>>b;

        if(a>=min && b>=min){
            if(a>=max && b>=max){
                S1[n1].id=id;
                S1[n1].score1=a;
                S1[n1].score2=b;
                S1[n1++].sum=a+b;
            }else if(a>=max && b<max){
                S2[n2].id=id;
                S2[n2].score1=a;
                S2[n2].score2=b;
                S2[n2++].sum=a+b;
            }else if(a<max && b<max && a>=b){
                S3[n3].id=id;
                S3[n3].score1=a;
                S3[n3].score2=b;
                S3[n3++].sum=a+b;
            }else{
                S4[n4].id=id;
                S4[n4].score1=a;
                S4[n4].score2=b;
                S4[n4++].sum=a+b;
            }
        }
    }
    cout<<n1+n2+n3+n4<<endl;

    sort(S1,S1+n1,cmp);
    sort(S2,S2+n2,cmp);
    sort(S3,S3+n3,cmp);
    sort(S4,S4+n4,cmp);

    for(int i=0;i<n1;i++)
        cout<<S1[i].id<<" "<<S1[i].score1<<" "<<S1[i].score2<<endl;
    for(int i=0;i<n2;i++)
        cout<<S2[i].id<<" "<<S2[i].score1<<" "<<S2[i].score2<<endl;
    for(int i=0;i<n3;i++)
        cout<<S3[i].id<<" "<<S3[i].score1<<" "<<S3[i].score2<<endl;
    for(int i=0;i<n4;i++)
        cout<<S4[i].id<<" "<<S4[i].score1<<" "<<S4[i].score2<<endl;
    
    system("pause");
    return 0;
}
