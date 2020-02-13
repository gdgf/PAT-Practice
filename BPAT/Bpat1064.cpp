/*
 * 来源于网络。
 * 这道题的关键，是做法，统计每一个数的各位数之和，不要重复计算
 */

#include<iostream>
#include<string>
using namespace std;
const int N=37;//所有数字都小于10^4因此每个数字各位之和小于等于36（9999）
bool a[N];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int id=0;
        for(int i=0;i<s.length();i++)
            id+=s[i]-'0';
        a[id]=true;//有朋友证号 id
    }

    //统计每一个朋友数出现的次数
    int num=0;
    for(int i=0;i<N;i++)
        if(a[i])
            num++;
    
    cout<<num<<endl;
    bool flag=false;
    for(int i=0;i<N;i++)
    {
        if(a[i])
        {
            if(flag) cout<<" ";
            cout<<i;
            flag=true;//标记已经有输出了
        }
    }
    cout<<endl;
    return 0;
}