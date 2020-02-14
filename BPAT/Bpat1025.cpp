//每K个结点进行反转

#include<iostream>
using namespace std;
#include<cstring> 
#include<string>
#include<cctype>
#include<cmath>
#include<vector>
#include<algorithm> 
int main()
{
	int a,n,m;
	cin>>a>>n>>m;
	int next[100005];
	int data[100005];
	int list[100005];
	int k;

	for(int i=0;i!=n;++i){
		cin>>k;
		cin>>data[k]>>next[k];
	}
    
	int sum=0; 
	for(int i=0;a!=-1;++i){
		list[i]=a;
		a=next[a];
		sum++;    //统计实际的链表数据的个数
	}

	for(int i=0;i<sum/m;++i)
		reverse(list+i*m,list+(i+1)*m);

	for(int i=0;i<sum;++i){
		if(i==sum-1)
			printf("%05d %d -1\n",list[i],data[list[i]]);
		else
			printf("%05d %d %05d\n",list[i],data[list[i]],list[i+1]);
	}
    system("pause");
	return 0;
 } 