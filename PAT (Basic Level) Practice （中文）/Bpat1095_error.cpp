#include<cstdio>
#include<cstring>
struct Student{
    char level[1];
    char roomid[3];
    char date[6];
    char studentid[3];
    int score;
};
Student student[10001]; 
struct Case
{
    int ca;
    char require[7];
};
Case Sitation[101];
void mystrcpy(char *from,char *to,int m,int n)
//把数组from的下标从m开始到n的字符复制到数组to中
{
    int j=0;
    for(int i=m;i<=n;i++){
        printf("%c ",from[i]);
        to[j++]=from[i];
    }
    printf("\n");
    for(int i=0;i<j;i++){
        printf("%c ",to[i]);
    }
    printf("\n");
}

int main(){
    int N,M; 
    scanf("%d %d",&N,&M);
    char id[13];
    int score;
    for(int i=0;i<N;i++){
        scanf("%s %d",id,&score);
        mystrcpy(id,student[i].level,0,0);
        mystrcpy(id,student[i].roomid,1,3);
        mystrcpy(id,student[i].date,4,9);
        mystrcpy(id,student[i].studentid,10,12);
        student[i].score=score;
        printf("\n");
    }
    for(int i=0;i<N;i++){
         printf("%s  %s  %s  %s  %d\n",student[i].level,student[i].roomid,student[i].date,student[i].studentid,student[i].score);
    }

    /*
    for(int j=0;j<M;j++){
        scanf("%d %s",Sitation[j].ca,Sitation[j].require);
        switch (Sitation[j].ca)
        {
        case 1:
            for(int i=0;i<N;i++){
                if(strcpy(student[i].level,Sitation[j].require)==0){
                    printf("%s%s%s%s %d\n",student[i].level,student[i].roomid,student[i].date,student[i].studentid,student[i].score);
                }
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
    }
    */

    return 0;
}