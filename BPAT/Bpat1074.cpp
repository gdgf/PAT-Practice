/*
 * 部分正确 
 */
#include<cstdio>
#include<cstring>
int main() {
    //int N;//学生人数，需要查缴的种类数
    char N[20];
    char N1[20],N2[20];
    scanf("%s", N);
    scanf("%s", N1);
    scanf("%s", N2);
    int n,n1,n2;
    n=strlen(N);
    n1=strlen(N1);
    n2=strlen(N2);

    int cha=0;
    if(n1<=n2){
        cha=n2-n1;
        for(int i=n1-1;i>=0;i--){
            N1[i+cha]=N1[i];
        }
        for(int i=0;i<cha;i++){
            N1[i]='0';
        }

    }else{
        cha=n1-n2;
        for(int i=n2-1;i>=0;i--){
            N2[i+cha]=N2[i];
        }
        for(int i=0;i<cha;i++){
            N2[i]='0';
        }
    }
    
    for(int i=n-1;i>=0;i--){
        int temp;
        temp=N1[i]-'0'+N2[i]-'0';
        int m;
        if(N[i]=='0'){
            m=temp-10;
        }else{
            m=temp-(N[i]-'0');
        }
        if(m<0)
            N1[i]=temp+'0';
        else{
            N1[i-1]=N1[i-1]+1;
            N1[i]=m+'0';
        }
    }
    int k;
    sscanf(N1,"%d",&k);
    printf("%d\n",k);
    return 0;
}
