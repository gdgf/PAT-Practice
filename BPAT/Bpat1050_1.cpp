// PAT_1050_螺旋数
 
# include <stdio.h>
# include <math.h>
# include <stdlib.h>
# include <algorithm>
# define Max_Size 10010
# define Min_Size 100
using namespace std;
 
int Get_n(float N)
{
    int i;
 
    for (i=(int)sqrt(N);i>0; i--)
    {
        if ((int)N%i == 0)
            return i;
    }
}
int main(void)
{
    int N;
    int i, j, k;
 
    int m, n;
    scanf("%d",&N);
    n = Get_n(N);
    m = N/n;
 
    int A[N+10];
    int B[m+1][n+1];
 
    // 初始化
    
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            B[i][j] = 0;
        }
    }

    /*
    这种初始化于B[][]={0}的区别。
    */
    
 
    for (i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    sort(A,A+N); // 排序
 
    // 开始放入 m行n列中去
    i=0; j=0; k=N-1;
    B[i][j] = A[k--];
    while (k>=0)
    {
        // 向右走
        while (!B[i][j+1] && j+1<n )
        {
            B[i][++j] = A[k--];
        }
        // 向下走
        while (!B[i+1][j] && i+1<m )
        {
            B[++i][j] = A[k--];
        }
        // 向左走
        while (!B[i][j-1] && j-1>=0)
        {
            B[i][--j] = A[k--];
        }
        // 向左走
        while (!B[i-1][j] && i-1>=0)
        {
            B[--i][j] = A[k--];
        }
    }
 
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("%d",B[i][j]);
                if (j<n-1)
                    printf(" ");
        }
        printf("\n");
    }
    return 0;
}