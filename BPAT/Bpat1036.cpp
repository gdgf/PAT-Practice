#include<cstdio>

int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int row=0;

    //其实事四舍五入；
    if(n%2==0){   //奇偶性处理
        row=n/2;
    }else{
        row=n/2+1;
    }
    
    for(int i=0;i<row;i++){
        for(int j=0;j<n;j++){

            if(i==0||i==(row-1)){   //第一行和最后一行
                if(j==(n-1)){
                    printf("%c\n",c);
                }else{
                    printf("%c",c);
                }

            }else{                     //中间行
                if(j==0){
                    printf("%c",c);    
                }else if(j==(n-1)){
                    printf("%c\n",c);
                }else {
                    printf(" ");
                }
            }
        }
    }
    return 0;
}