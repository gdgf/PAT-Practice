//答案来源于网络。

//插入的特点是：前半部分有序，后半部分则与初始序列相同
//而归并的后半部分则不一定与初始序列相同
//由于结果唯一，故可根据此特点来区分插入和归并

#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cstring>
#include <ctime>
#include <cmath>
using namespace std;
const int MAXSIZE = 110;

int I[MAXSIZE] = {0}, P[MAXSIZE] = {0}; //初始序列和部分排序后的序列
int N;

bool isSame()//判断I是否和P一样
{
    int i=0;
    while(i<N && I[i] == P[i]) i++;
    if(i == N) return true;
    return false;
}

int main()
{
    int i, j;
    scanf("%d", &N);
    for(i=0; i<N; i++) scanf("%d", &I[i]);
    for(i=0; i<N; i++) scanf("%d", &P[i]);
    
    for(i=1; i<N && P[i] >= P[i-1]; i++);//插入排序，前面是排好序的，后面是与初始序列相同
    for(j=i; j<N && I[j] == P[j]; j++);
    
    if(j == N)//后半部分相同，则为插入排序
    {
        printf("Insertion Sort\n");
        for(; i && P[i] < P[i-1]; i--) swap(P[i], P[i-1]);//对P再进行一次插入排序
    }
    else//否则为归并排序
    {
        printf("Merge Sort\n");
        int step=2;//归并步长
        for(; !isSame(); step *= 2)//把I归并，直到I和P相同时退出；计算得P最后一次步长是多少
        {
            for(int i=0; i<N; i+=step) sort(I+i, I+min(N, i+step));//对I进行一次归并排序
        }
        for(i=0; i<N; i+=step) sort(P+i, P+min(N, i+step));//对P再进行一次归并排序
    }
    printf("%d", P[0]);//打印输出
    for(i=1; i<N; i++) printf(" %d", P[i]);
	return 0;
}

