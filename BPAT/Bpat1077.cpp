/*
* 四舍五入的考察
*/
#include<iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		int ans=0,sum=0,tmp,num=0,Max=0,Min=m;
		scanf("%d",&ans);//老师评分
		for(int j=2;j<=n;j++)
		{
			scanf("%d",&tmp);
			if(0<=tmp&&tmp<=m)//合法 
			{
				sum+=tmp;
				num++;//评分人数加一
				Max=max(Max,tmp);//最高分 
				Min=min(Min,tmp);//最低分 
			}
		}
		sum=sum-Max-Min;//减去一个最高分和一个最低分
		num-=2;//评分人数减2
		double ave=(double)sum/(double)num;//求同学评分的平均分
		double ave2=(ave+ans)/2.0;
		ans=(int)ave2;
		if(ave2-ans>=0.5) ans++;//四舍五入
		printf("%d\n",ans); 
	}
	return 0;
}