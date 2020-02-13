/*
 * 参考了网络，这种思想要有。
 */
#include <iostream>
using namespace std;
const int MAXN = 105000;
int a[MAXN] ;
bool f(int n){
    for(int i = 2 ; i * i  <= n ; i++){   
        if( 0 == n % i )
           return false;
    }
    return true;
}
int main()
{
    int k = 0;
    //首先初始化好所有的素数
    for(int i = 2 ; i < MAXN ; i++){
        if( f(i) )
            a[ k++ ] = i;
    }

    int M , N , jl = 0;
    cin>>M>>N;

    for(int i = M - 1 ; i < N - 1 ; i ++ ){
        
        if( jl!=9 ){  //每一行的前9个
            cout<<a[i]<<' ';
            jl++;
        }else{
            cout<<a[i]<<endl;
            jl = 0;
        }
    }
    cout<<a[N - 1];
} 