//来源于网络
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <utility>
#include <algorithm>
 
using namespace std;
 
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second == b.second ? a.first < b.first : a.second > b.second;
}
int main()
{
    int N, K, n;//n为每行人数
    int i, j;
    deque<pair<string, int>> row;
    vector<pair<string, int>> p;
 
    cin >> N >> K;
    for(i = 0; i < N; i++)
    {
        string name;
        int height;
        cin >> name >> height;
        p.push_back(make_pair(name, height));
    }
    sort(p.begin(), p.end(), cmp);
    int order = 0;//正在入队的人的编号
    for(i = 0; i < K; i++)
    {
        if(i == 0)//最后一排
            n = N / K + N % (N / K);
        else
            n = N / K;
        for(j = 0; j < n; j++)
            if(j % 2)
                row.push_front(p[order++]);
            else
                row.push_back(p[order++]);
        cout << row[0].first;//输出当前排
        for(j = 1; j < n; j++)
            cout << " " << row[j].first;
        cout << endl;
        row.clear();
    }
    return 0;
}