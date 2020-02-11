/*
 数组原地移动技术
 将有n个元素的数组的后m个数依次移动到前面
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
   for(int i=0;i<m;i++){
       int t=array[n-1];
       for(int j=n-2;j>=0;j--){
           array[j+1]=array[j];
       }
       array[0]=t;
   }
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