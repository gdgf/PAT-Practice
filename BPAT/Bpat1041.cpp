#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;
 
struct Student
{
    char num[20];
    int shi;
    int kao;
}stu[1000+10];
int main()
{
    freopen("../data/in.txt", "r", stdin);
    freopen("../data/out.txt", "w", stdout);
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> stu[i].num >> stu[i].shi >> stu[i].kao;
 
    int m = 0;
    cin >> m;
    while (m--)
    {
        int t;
        cin >> t;
        for (int i = 0; i < n; i++)
            if (stu[i].shi == t)
                cout << stu[i].num << " " << stu[i].kao << endl;
    }
    return 0;
}