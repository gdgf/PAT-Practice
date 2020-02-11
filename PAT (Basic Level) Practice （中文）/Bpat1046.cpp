#include<cstdio>
#include<cstring>
int main(){
    int N;
    int Asay,Aout,Bsay,Bout;
    int Asum=0,Bsum=0;
    scanf("%d",&N);  //输入数据量
    for(int i=0;i<N;i++){
        scanf("%d %d %d %d",&Asay,&Aout,&Bsay,&Bout);
        if(Aout==(Asay+Bsay)&&Bout!=(Asay+Bsay))Bsum++;
        else if(Aout!=(Asay+Bsay)&&Bout==(Asay+Bsay))Asum++;
    }
    printf("%d %d\n",Asum,Bsum);
    return 0;
}