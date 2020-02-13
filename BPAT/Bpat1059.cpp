#include<cstdio>
#include<cmath>

int flag[10010]={0};

bool check(int k){
    int i, sqr=(int)sqrt(double(k));
    for(i=2;i<=sqr;i++){
        if(k%i==0)return false;
    }
    return true;
}

int main(){
    int i, n, k, rank=1, temp;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&temp);
        if(rank==1){
            flag[temp]=5;
            rank++;
        }//5特别将
        else if(check(rank)){
            flag[temp]=2;
            rank++;
        }//2素数小黄人
        else {
            flag[temp]=1;
            rank++;
        }//1巧克力    //3checked
    }
    scanf("%d",&k);
    for(i=0;i<k;i++){

        scanf("%d",&temp);
        if(flag[temp]==5){
            printf("%04d: Mystery Award\n",temp);
            flag[temp]=3;
        }
        else if(flag[temp]==2){
            printf("%04d: Minion\n",temp);
            flag[temp]=3;
        }
        else if(flag[temp]==1){
            printf("%04d: Chocolate\n",temp);
            flag[temp]=3;
        }
        else if(flag[temp]==0){
            printf("%04d: Are you kidding?\n",temp);
        }
        else if(flag[temp]==3){
            printf("%04d: Checked\n",temp);
        }
    }
    return 0;
}