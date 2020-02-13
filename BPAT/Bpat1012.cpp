#include<iostream>
#include<cstdio>
using namespace std;
int main(){

    char c;
    int array[10001];
    int i=0;
    int A1=0,A2=0,A3=0,A5=0,m=0,N=0;
    float A4=0;
    while(cin>>array[i]){
        int x=array[i]%5;
        switch (x)
        {
            case 0:
                if(array[i]%2==0)
                    A1+=array[i];
                break;
            case 1:
                if(m%2==0){ //奇数加，偶数减
                    A2+=array[i];
                }else{
                    A2-=array[i];
                }
                m++;
                break;
            case 2:
                A3++;
                break;
            case 3:
                A4+=array[i];
                N++;
                break;
            case 4:
                if(array[i]>A5){
                    A5=array[i];
                }
                break;
        }
        i++;
        if((c = getchar())=='\n')
            break;
    }

    A4=1.0*A4/N;
    
    if(A1==0){
        printf("N ");
    }else{
        printf("%d ",A1);

    }

    if(m==0){
        printf("N ");
    }else{
        printf("%d ",A2);
    }

    if(A3==0){
        printf("N ");
    }else{
        printf("%d ",A3);
    }
    
    if(N==0){
        printf("N ");
    }else{
        printf("%.1f ",A4);
    }

    if(A5==0){
        printf("N\n");
    }else{
        printf("%d\n",A5);
    }
    return 0;
}