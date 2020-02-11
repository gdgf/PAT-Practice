/*
 * 部分正确,需要优化
*/
#include<iostream>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;


struct info {
    string id;
    int Gp=-1;
    int Gm=-1;
    int Gf=-1;
    int G=0;
};

int sishewuru(double x){  //正数四舍五入
    int x1=(int)x;
    if(x-x1>=0.5)
        return x1+1;
    else
        return x1;
}
int cmp(info a,info b){
    if(a.G!=b.G){   //成绩不同
        return a.G > b.G; //成绩递减
    }else{
        return a.id<b.id;  //学号递增
    }
}

int main() {
    int P,M,N;
    cin>>P>>M>>N;
    info score[P];  //平时在线作业没有做，就不可能合格，所以只开这么大的空间
    //int flag[10000]={0};

    string name;
    int s,count=0;

    for(int i=0;i<P;i++){
        cin>>name>>s;
        if(s>=200) {
            score[count].id=name;
            score[count].Gp=s;
            count++;           //这已经是总人数了
        }
    }////这个成绩一定要有


    for(int i=0;i<M;i++){
        cin>>name>>s;
        int j=0;
        for(j=0;j<count;j++){ //找这个人平时作业有没有做过
            if(score[j].id==name)
                score[j].Gm=s;
        }
    }

    for(int i=0;i<N;i++){
        cin>>name>>s;
        int j=0;
        for(j=0;j<count;j++){ //找这个人有没有考过
            if(score[j].id==name)
                score[j].Gf=s;
        }
    }
    for(int i=0;i<count;i++) {
        //录入最后的成绩
        if (score[i].Gm < score[i].Gf) {
            if (score[i].Gf >= 60)
                score[i].G = score[i].Gf;
        } else {
            int temp = 0;
            double sum = 0;
            if (score[i].Gm == -1)
                temp = 0;
            sum = 0.4 * score[i].Gm + 0.6 * score[i].Gf;
            if (sum >= 60) {
                score[i].G = sishewuru(sum);
            }
        }
    }
    sort(score,score+count,cmp);
    //cout<<count<<endl;
    for(int i=0;i<count && score[i].G>=60; i++){
        cout<<score[i].id<<" "<<score[i].Gp<<" "<<score[i].Gm<<" "<<score[i].Gf<<" "<<score[i].G<<endl;
    }
    return 0;
}

