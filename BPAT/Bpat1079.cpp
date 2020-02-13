/*
还有部分错
*/
#include<iostream>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

int ishuiwen(char *A){
    int k=strlen(A);
    for(int i=0;i<k/2;i++){
        if(A[i]!=A[k-i-1] ){
            return 0;
        }
    }
    return 1;
}
void change(char *A,char *B){
    int k=strlen(A);
    for(int i=0;i<k;i++){
        B[k-i-1]=A[i];
    }
}

int main() {
    //int n;
    //cin>>n;
    char A[20], B[20], C[20];
    cin >> A;
    int count = 0;
    while (1) {
        if(ishuiwen(A)){
            cout<<A<<" is a palindromic number."<<endl;
            break;
        }else if (count < 10) {
            change(A, B);
            int a, b, c;
            sscanf(A, "%d", &a);
            sscanf(B, "%d", &b);
            c = a + b;
            cout<<A<<" + ";
            for(int j=0;j<strlen(A);j++)
                cout<<B[j];
            cout<<" = "<<c<<endl;
            sprintf(A, "%d", c);
            count++;
        } else {
            cout<<"Not found in 10 iterations.\n"<<endl;
            break;
        }
    }
    return 0;
}

