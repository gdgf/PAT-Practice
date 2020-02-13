/*
 * 统计给出的数字中每一个数出现的次数
 * 从小到大输出
 * 水题
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    int num[10]={0};
    cin>>x;
    for(int i=0;i<x.size();i++){
        switch (x[i])
        {
            case '0':
                num[0]++;
                break;
            case '1':
                num[1]++;
                break;
            case '2':
                num[2]++;
                break;
            case '3':
                num[3]++;
                break;
            case '4':
                num[4]++;
                break;
            case '5':
                num[5]++;
                break;
            case '6':
                num[6]++;
                break;
            case '7':
                num[7]++;
                break;
            case '8':
                num[8]++;
                break;
            case '9':
                num[9]++;
                break;
            default:
                break;
        }

    }
    for(int i=0;i<10;i++){
        if(num[i]!=0){
            cout<<i<<":"<<num[i]<<endl;
        }else{
            continue;
        }
    }
    return 0;
}