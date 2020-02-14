/*
 * 组个最小数：
 * 输入了每个数字的个数
 */

#include<iostream>
using namespace std;
int main() {
	int number[10];
    //统计出现的数字的个数
    for(int i=0;i<10;i++){
        cin>>number[i];
    }
    int m=0;
    for(int i=1;i<10;i++){
        if(number[i]!=0){ //找到第一个个数不为0的数字
            m=i;
            cout<<m;
            break;
        }
    }
    for(int i=0;i<10;i++){
        if(i==m){
            for(int j=0;j<number[i]-1;j++)
               cout<<i;
        }else{
            for(int j=0;j<number[i];j++)
                cout<<i;
        }
    }
    cout<<endl;
	system("pause");
	return 0;
}