#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ID[n];
    int X[100]={0};         //求和取模
    int flag[100]={0};      // 标志
    long long sum[100]={0};
    int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char ch[]={'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    for(int i=0;i<n;i++){
        cin>>ID[i];
        //加权求和
        for(int j=0;j<17;j++) {
            //有非数字的字符，取消
            if (ID[i][j] < '0' || ID[i][j] > '9') {
                flag[i] = 1;
                break;
            }
            sum[i] += (ID[i][j] - '0') * weight[j];
        }
        X[i]=sum[i]%11;
    }//求出了所有的和，并将其取模

    int count=0;
    for(int i=0;i<n; i++) {
        if ((flag[i] == 1) || (flag[i] == 0 && ID[i][17] != ch[X[i]])) {
            cout << ID[i] << endl;
            count++;
        }
    }
    if(count==0){
        cout<<"All passed"<<endl;
    }
    system("pause");
    return 0;
}