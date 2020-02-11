
    /*
    * 分数总和大的返回真，小于返回假。共三种情况
    * 分数相同：
    *   德分高，返回真
    *   德分相同，id大返回真
    *        
    */
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<bits/stdc++.h>
typedef struct{
    char id[50];
    int score1,score2,sum;
}student;
bool cmp(student a,student b){
    if(a.sum >b.sum)
        return true;
    else if(a.sum ==b.sum){
        if(a.score1 > b.score1)
            return true;
        else if(a.score1 == b.score1)
            return (strcmp(a.id,b.id)>0)?false:true;
        else if(a.score1 < b.score1)
            return false;
    }
    else if(a.sum <b.sum)
        return false;
    return false;
}
int main()
{
    int size,min,max;
    scanf("%d %d %d",&size,&min,&max);
    student* best = (student*)malloc(sizeof(student)*size);
    student* second = (student*)malloc(sizeof(student)*size);
    student* less = (student*)malloc(sizeof(student)*size);
    student* lessess = (student*)malloc(sizeof(student)*size);
    int bestsize=0,secondsize=0,lesssize=0,lessesssize=0;
    int temp1,temp2;
    char id[50];
    while(size--){
        scanf("%s %d %d",id,&temp1,&temp2);
        if(temp1>=max && temp2 >=max){
            strcpy(best[bestsize].id,id);
            best[bestsize].score1 = temp1;
            best[bestsize].score2 = temp2;
            best[bestsize++].sum = temp1+temp2;
        }
        else if(temp1 >=max && temp2>=min){
            strcpy(second[secondsize].id,id);
            second[secondsize].score1 = temp1;
            second[secondsize].score2 = temp2;
            second[secondsize++].sum = temp1+temp2;
        }
        else if(temp1 >=min && temp2>=min){
            if(temp1 >= temp2){
                strcpy(less[lesssize].id,id);
                less[lesssize].score1 = temp1;
                less[lesssize].score2 = temp2;
                less[lesssize++].sum = temp1+temp2;
            }
            else{
                strcpy(lessess[lessesssize].id,id);
                lessess[lessesssize].score1 = temp1;
                lessess[lessesssize].score2 = temp2;
                lessess[lessesssize++].sum = temp1+temp2;
            }
        }
    }
    std::sort(best,best+bestsize,cmp);
    std::sort(second,second+secondsize,cmp);
    std::sort(less,less+lesssize,cmp);
    std::sort(lessess,lessess+lessesssize,cmp);
    printf("%d\n",bestsize+secondsize+lesssize+lessesssize);
    for(int i=0;i<bestsize;i++)
        printf("%s %d %d\n",best[i].id,best[i].score1,best[i].score2);
    for(int i=0;i<secondsize;i++)
        printf("%s %d %d\n",second[i].id,second[i].score1,second[i].score2);
    for(int i=0;i<lesssize;i++)
        printf("%s %d %d\n",less[i].id,less[i].score1,less[i].score2);
    for(int i=0;i<lessesssize;i++)
        printf("%s %d %d\n",lessess[i].id,lessess[i].score1,lessess[i].score2);

    return 0;
}
