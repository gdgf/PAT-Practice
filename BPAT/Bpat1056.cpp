//??
#include<cstdio>
int main(){

    int number[10];
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                int s=number[i]*10+number[j];
                //printf("%d\n",s);
                sum+=s;
            }
        }
    }

    printf("%d",sum);
    return 0;
}
