#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool cmp( int a,int b ){
    return a>b;
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for( int i=0;i<n;++i ){
        cin>>a[i];
    }
 
    for( int i=0;i<n;++i ){
        int b=a[i];
        while( b!=1 ){
            if( b%2==0 ){
                b/=2;
            }
            else{
                b=( 3*b+1 )/2;
            }
            
            for( int j=0;j<n;++j ){//检测数组其他项，可以覆盖就将其设为1（免于while循环）
                if( j!=i && a[j]==b ){
                    a[j]=1;
                }
            }
        }
    }
 
    int c[100];
    int l=0;
    for( int i=0;i<n;++i ){//将关键数存入专门的数组
        if( a[i]!=1 ){
            c[l++]=a[i];
        }
    }
 
    //对关键数数组进行排序
    sort(c,c+l,cmp);//排序范围：c[0]~c[l-1]，排序方式：cmp方法
 
    cout<<c[0];
    for( int q=1;q<l;++q ){
        cout<<" "<<c[q];
    }
 
    return 0;
}
