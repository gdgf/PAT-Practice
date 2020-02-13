//来源于网络
#include<stdio.h>
int main(){
	int a, b, c, m, n, p,t1=0,t2=0, t3=0;
	long long	temp=0, sum1=0,sum2=0;
	scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&m,&n,&p);

	//同一度量。
    sum1=a*17*29+b*29+c;
	sum2=m*17*29+n*29+p;

	if(sum1>sum2){
        printf("-");
        temp=sum2; 
        sum2=sum1; 
        sum1=temp;
    }

	t1=(sum2-sum1)/(17*29);  
	t2=((sum2-sum1)%(17*29))/29;
	t3=((sum2-sum1)% (17*29))%29;
	printf("%d.%d.%d\n",t1,t2,t3);
    return 0;
}