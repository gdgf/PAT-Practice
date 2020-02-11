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
   if(a=='C'&&b=='J')return 1;
   if(a=='J'&&b=='B')return 1;
   if(a=='B'&&b=='C')return 1;
   //平局
   if(a=='C'&&b=='C')return 0;
   if(a=='J'&&b=='J')return 0;
   if(a=='B'&&b=='B')return 0;
   //输
   return -1;
}
int main(){

    int n;
    cin>>n;
    int a1=0,b1=0,c1=0;
    int a2=0,b2=0,c2=0;
    char xa[100001][2];
    int m1[3]={0},m2[3]={0};
    
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
            a1++;
            c2++;
        }else if(temp==0){
            b1++;
            b2++;
        }else{
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
   
   // cout<<m1[0]<<" "<<m1[1]<<" "<<m1[2]<<endl;
    //cout<<m2[0]<<" "<<m2[1]<<" "<<m2[2]<<endl;
    char maxa,maxb;
   
    if(m1[0]>=m1[1]){
        maxa='B';
    }else{
       maxa='C';
       m1[0]=m1[1];
    }
    if(m1[0]<m1[2]){
        maxa='F';
    }

    if(m2[0]>=m2[1]){
        maxb='B';
    }else{
       maxb='C';
       m2[0]=m2[1];
    }
    if(m2[0]<m2[2]){
        maxb='F';
    }
    cout<<maxa<<" "<<maxb<<endl;
    return 0;
}