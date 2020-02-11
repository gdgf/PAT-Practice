/*
先确定是压缩还是解压
压缩统计该字符串的个数，1直接输出该字符串，大于1先输出数量再输出该字符串，字符串最后以'/0'结尾
直接判断str[i]和str[i+1]就可以了
解压先把前面的数量计算出来，没有就是1 
*/ 
#include<iostream>
#include<string>
using namespace std;
int main(){
	char type;
	string str;
//	freopen("input.txt","r",stdin);
	scanf("%c",&type);
	getchar();
	getline(cin,str);
	if(type == 'C'){
		int len = str.size();
		int cnt = 1;
		for(int i = 0;i < len;i++){
			if(str[i] == str[i+1]){
				cnt++;
			}else{
				if(cnt>1){
					printf("%d",cnt);
				}
				printf("%c",str[i]);
				cnt = 1;
			}
		}
	}else{
		int len = str.size();
		int cnt = 0;
		for(int i = 0;i < len;i++){
			if(str[i]<='9'&&str[i]>='0'){
				cnt*=10;
				cnt+=str[i]-'0';
			}else{
				if(cnt == 0){
					printf("%c",str[i]);
				}else
				for(int j = 0;j < cnt;j++){
					printf("%c",str[i]);
				}
				cnt = 0;
			}
		}
	}
	return 0;
}