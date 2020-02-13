#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    string pingyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    string m;
    cin>>m;
    int sum=0;

    for(int i=0;i<m.size();i++){
        sum+=m[i]-'0';
    }
    m=to_string(sum);
    for(int i=0;i<m.size();i++){
        int j=m[i]-'0';
        if(i==0){
            cout<<pingyin[j];
        }else{
           cout<<" "<<pingyin[j];
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}