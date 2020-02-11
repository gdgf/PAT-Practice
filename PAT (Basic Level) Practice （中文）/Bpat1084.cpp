/* 
 * 来源于网络，这个题目的主要好处是，说了字符串、数字的连接
 */
#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>s>>n;
	while(--n){

		string ans="";
		int i=0;

        //计算当前字符串中每个字符重复的次数，并将其写入新的字符串中
		while(i<s.size()){
			int cnt=1,j=i+1;	//cnt统计s[i]出现的次数
			while(j<s.size() && s[j]==s[i]) {
				j++;
				cnt++;
			}
			ans+=s[i];   // 字符串的连接
			
            ans+=to_string((long long)cnt);  //数字变成字符串，然后进行连接
			i=j;
		}
		s=ans;
	}
	cout<<s<<endl;
    system("pause");
	return 0;
}