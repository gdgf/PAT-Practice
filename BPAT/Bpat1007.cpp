#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n) {
    if (n <= 1) 
        return false;
    int sqr = int(sqrt(n * 1.0));
    for (int i = 2; i <= sqr; i++)
        if (n % i == 0) 
            return false;
     return true;
}

int main(){
   int N,n=0,m=0;
   cin>>N;
   int array[100001];
   //得到素数数组
   for(int i=1;i<=N;i++){
       if(isprime(i)){
           array[n]=i;
           n++;
       }
   }
   
   //得到素数的对
   for(int i=0;i<n-1;i++){
       if(array[i+1]-array[i]==2){
          m++;
       }
   }
   cout<<m<<endl;
}