/*
 * 水题
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <cmath>

int main(){
    int N;
    scanf("%d",&N);
    int a,b;
    double max=0,temp;

    for(int i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        temp=sqrt(pow(a,2)+pow(b,2));
        if(max<temp){
            max=temp;
        }
    }

    printf("%.2lf\n",max);

    return 0;
}