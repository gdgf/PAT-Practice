/*
 * 1. 四舍五入的处理，因为在C/C++中，不足整数的小数全部变为0.
 *    所以要实现四舍五入，我们在原来的值后面加上0.5，这样，大于0.5的
 *    数就会超过1.这样，就完成了入的操作。同样，如果原来小于0.5，它是要被舍得，
 *    即使加上了0.5，它任然小于1，所以还是会被舍弃掉。测试见grammar;
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    long long  C1,C2;
    cin>>C1>>C2;
    C1=((double)(C2-C1)/100+0.5);

    long long time=C1;
    int hour=(int)(time/3600);
    
    time%=3600;
    int minute=(int)(time/60);
    
    time%=60;
    int second=(int)time;

    printf("%02d:%02d:%02d\n",hour,minute,second);
    system("pause");
    return 0;
}