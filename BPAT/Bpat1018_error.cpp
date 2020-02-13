/*
 * 还没有通过/
 * 石头剪刀布
 * C:锤子
 * J:剪刀
 * B:布
 * 规则： C J
 *       J  B
 *       B C
 */
#include<iostream>
#include<cstdio>
using namespace std;
int cmp(char a,char b){
    //赢
   if((a=='C'&& b=='J')||(a=='J'&& b=='B')||(a=='B'&& b=='C'))
        return 1;
   if(a==b)
        return 2;
   //输
   return 3;
}
int main(){

    int n;
    cin>>n;
    int a1=0,b1=0,c1=0;
    int a2=0,b2=0,c2=0;
    int m1[3]={0},m2[3]={0};  //统计各自胜局中每个字母出现的次数
    char Q[3]={'B','C','J'};
    //统计各自的胜场、平、输的次数
    //统计获胜次数最多的字母
    for(int i=0;i<n;i++){
        char t1,t2;
        cin>>t1>>t2;
        int temp=cmp(t1,t2);
        if(temp==1){
            if(t1=='B'){
                m1[0]++;
            }else if(t1=='C'){
                m1[1]++;
            }else if(t1=='F'){
                m1[2]++;
            }
            a1++;    //甲胜
            c2++;    //乙输
        }else if(temp==2){
            b1++;    
            b2++;    
        }else if(temp==3){     //甲输乙胜
            if(t2=='B'){
                m2[0]++;
            }else if(t2=='C'){
                m2[1]++;
            }else if(t2=='F'){
                m2[2]++;
            }
            a2++;
            c1++;
        }
    }
    cout<<a1<<" "<<b1<<" "<<c1<<endl;
    cout<<a2<<" "<<b2<<" "<<c2<<endl;

    int s1=0,s2=0;
    for(int i=0;i<3;i++){
        if(m1[i]>m1[s1]){
            s1=i;
        }
        if(m2[i]>m2[s2]){
            s2=i;
        }
    }
    cout<<Q[s1]<<" "<<Q[s2]<<endl;
    system("pause");

    return 0;
}