#include<stdio.h>
#include<stdlib.h>

//获取Ｋ个字符的函数
int getstr(char a[], int i, int K){
    int m;
    char b[K];
    for(int j = 0; j < K; j++)    
       b[j] = a[i+j];
    m = atoi(b);    //将字符串转换成int型
    return m;
}
//判断是否为素数的函数
int isprime(int m){
    int flag = 1;
    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0){
            flag = 0;
            break;
        }
    }
    if(m < 2)  flag = 0;    //判断m是否小于２，不过这条不加也能AC
    return flag;
}
int main()
{
    int L, K, f = 0;
    scanf("%d %d", &L, &K);
    char a[L];
    scanf("%s", a);
    for(int i = 0; i < L - K + 1; i++){
        int str = getstr(a, i, K);      //取从i开始的Ｋ位数
        f = isprime(str);               // 判断是否为素数
        if(f == 1){
            printf("%0*d", K, str);    //固定输出Ｋ位数，如果str不够Ｋ位，则补０
            break;
        }
    }
    if(f == 0)  printf("404");
    return 0;
}