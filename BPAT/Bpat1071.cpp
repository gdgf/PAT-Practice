/*
 * 水题
 */
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int T,K;
    scanf("%d %d",&T,&K);
    int sum=T;
    for(int i=0;i<K;i++){
        int n1,b,t,n2;
        scanf("%d%d%d%d",&n1,&b,&t,&n2);
        if(sum==0){
            printf("Game Over.\n");
            break;
        }else if(sum<t){
            printf("Not enough tokens.  Total = %d.\n",sum);
        }else{

            if(n1>n2){
                if(b==0){
                    sum+=t;
                    printf("Win %d!  Total = %d.\n",t,sum);
                }else{
                    sum-=t;
                    printf("Lose %d.  Total = %d.\n",t,sum);
                }
            }else{
                if(b==1){
                    sum+=t;
                    printf("Win %d!  Total = %d.\n",t,sum);
                }else{
                    sum-=t;
                    printf("Lose %d.  Total = %d.\n",t,sum);
                }
            }
        }
    }
    system("pause");
    return 0;
}