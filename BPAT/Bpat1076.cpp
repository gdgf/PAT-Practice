/*
 * getline的使用很重要  
 */
#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
using namespace std;

int main() {
    //int N;//学生人数，需要查缴的种类数
    int N;
    scanf("%d",&N);
    getchar();       //这里的使用很重要
    int wifi[N];
    string str;
    for(int i=0;i<N;i++){
        getline(cin,str);
        //printf("%d\n",str.size());

        for(int j=0;j<str.size();j++){
            if(str[j]=='T'){
                int m=0;
                if(str[j-2]=='A'){
                    m=1;
                }else if(str[j-2]=='B'){
                    m=2;
                }else if(str[j-2]=='C'){
                    m=3;
                }else if(str[j-2]=='D'){
                    m=4;
                }
                wifi[i]=m;
                break;
            }
        }
    }
    for(int i=0;i<N;i++)
        printf("%d",wifi[i]);

    printf("\n");
    return 0;
}
