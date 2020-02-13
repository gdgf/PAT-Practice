/*
 * 石头剪刀布
 * C:锤子
 * J:剪刀
 * B:布
 * 规则： C J
 *       J  B
 *       B C
 */
/*
 还没有通过
*/

#include<iostream>
#include<cstdio>
using namespace std;

int cmp(char a,char b){
    //赢
   if((a=='C'&& b=='J')||(a=='J'&& b=='B')||(a=='B'&& b=='C'))
        return 1;
   //平局
   if((a=='C'&& b=='C')||(a=='J'&& b=='J')||(a=='B'&& b=='B'))
        return 2;
   //输
   return 3;
}

int main(){

    int n;
    cin>>n;
    int a1=0,b1=0,c1=0;
    int a2=0,b2=0,c2=0;
    char xa[100001][2];
    int m1[3]={0},m2[3]={0};  //统计各自胜局中每个字母出现的次数


    //统计各自的胜场、平、输的次数
    //统计获胜次数最多的字母
    for(int i=0;i<n;i++){
        
        cin>>xa[i][0]>>xa[i][1];
        int temp=cmp(xa[i][0],xa[i][1]);
        if(temp==1){
            if(xa[i][0]=='B'){
                m1[0]++;
            }else if(xa[i][0]=='C'){
                m1[1]++;
            }else if(xa[i][0]=='F'){
                m1[2]++;
            }
            a1++;    //甲胜
            c2++;    //乙输
        }else if(temp==2){
            b1++;    
            b2++;    
        }else if(temp==3){     //甲输乙胜
            if(xa[i][1]=='B'){
                m2[0]++;
            }else if(xa[i][1]=='C'){
                m2[1]++;
            }else if(xa[i][1]=='F'){
                m2[2]++;
            }
            c1++;
            a2++;
        }
    }
    cout<<a1<<" "<<b1<<" "<<c1<<endl;
    cout<<a2<<" "<<b2<<" "<<c2<<endl;


    char Q[3]={'B','C','F'};
    int max=0,s1=0,s2=0;
    for(int i=0;i<3;i++){
        if(m1[i]>max){
            max=m1[i];
            s1=i;
        }
    }
    for(int i=0;i<3;i++){
        if(m2[i]>max){
            max=m2[i];
            s2=i;
        }
    }
    cout<<Q[s1]<<" "<<Q[s2]<<endl;

    system("pause");

    return 0;
}