/*
 * 只有部分对，有的情况应该还没考虑到
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>

int main(){

    int N;
    scanf("%d",&N);
    int number[N];
    for(int i=0;i<N;i++){
        scanf("%d",&number[i]);
    }
    std::sort(number,number+N);
    for(int i=0;i<N;i++){
        printf("%d ",number[i]);
    }
    printf("\n");

    /*
     * 10
     * 6 7 6 9 3 10 8 2 7 8
     * 2 3 6 6 7 7 8 8 9 10
     */

    for(int i=N;i>=1;i--){  //从后面向前试，假设刚开始E =10
        //假设E=i
        if((N-i)>0){  //不是第一个
            if(number[N-i]>i && number[N-i-1]<=i ){
                printf("%d",i);
                break;
            }
        }else {
            if(number[N-i]>i){
                printf("%d",N);
                break;
            }
        }
    }
    return 0;
}