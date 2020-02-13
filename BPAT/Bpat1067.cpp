/*
 * 部分正确
 */
#include<cstdio>
#include <string>
#include <iostream>
using  namespace std;
int main()
{
    string password;
    int N;
    cin>>password>>N;

    string temp;
    int count=0;

    cin>>temp;
    count++;
    while(temp!="#"){
        //count <=N时，输入才有意义，别的时候输入没意义。
        if(count<=N){
            if(temp==password){
                cout<<"Welcome in"<<endl;
                break;
            }else{
                if(count==N){
                    cout<<"Wrong password: "<<temp<<endl;
                    cout<<"Account locked"<<endl;
                }else {
                    cout << "Wrong password: " << temp << endl;
                }
            }
        }
        cin>>temp;
        count++;
    }
    return 0;
}