/*
 * 在不新建数组的情况下，对数组进行移位。
 * 如果移动m位，一次移动1位，移动m次。
 */
#include <iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int array[101];
   for(int i=0;i<n;i++){
       cin>>array[i];
   }

    //这一步是关键
   for(int i=0;i<m;i++){
       int t=array[n-1];
       for(int j=n-2;j>=0;j--){
           array[j+1]=array[j];
       }
       array[0]=t;
   }
   
   //输出
   for(int i=0;i<n;i++){
       if(i==0){
           cout<<array[i];
       }else{
           cout<<" "<<array[i];
       }
   }
   cout<<endl;
   return 0;
}