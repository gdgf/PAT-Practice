/*
来源于网络
*/
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    int cxl, max_val=0;
    vector<int> vec(n+1);

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
        {
            scanf("%d", &cxl);
            vec[j] += cxl;
            if(max_val<vec[j]) max_val = vec[j];
        }
    printf("%d\n", max_val);

    bool flag = false;
    for(int i=1; i<=n; i++)
    {
        if(max_val==vec[i])
        {
            if(flag) printf(" ");
            printf("%d", i);
            flag = true;
        }
    }

    return 0;
}
