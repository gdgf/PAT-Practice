#include<iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    char c;
    cin>>c;
    getchar();
    string temp;
    getline(cin,temp);
    if(c=='C'){   //字符串 需要被压缩
        for(int i=0;i<temp.size();i++){
            int j=i;
            while(temp[j]==temp[i] && j<temp.size()){
                j++;
            }
            if(j-i==1)printf("%c",temp[i]);
            else
                printf("%d%c",j-i,temp[i]);
            i=j-1;
        }
    }else if(c=='D'){  //字符串需要被解压
        for(int i=0;i<temp.size();i++){
            if(temp[i]>'1' && temp[i]<='9'){
                int n=temp[i]-'0';
                for(int j=0;j<n;j++){
                    printf("%c",temp[i+1]);
                }
            }else{
                printf("%c",temp[i]);
            }
            i++;
        }
    }
    return 0;
}