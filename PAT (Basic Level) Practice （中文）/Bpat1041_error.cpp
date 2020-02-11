#include<cstdio>
struct info{
    char id[16];
    int machine;
    int seat;
};
info student[10001];
int machine[10001];
int main(){
    int N,M;

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s %d %d",student[i].id,&student[i].machine,&student[i].seat);
    }

    scanf("%d",&M);
    for(int i=0;i<M;i++){
        scanf("%d",&machine[i]);
        for(int j=0;j<N;j++){                    
            if(student[j].machine==machine[i])
                printf("%s %d\n",student[j].id,student[j].seat);
        }
    }
    return 0;
}

