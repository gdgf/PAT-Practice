/*
这里涉及的语法：
1.  c.insert(0, 4 - c.length(), '0');
2.  字符串中字符大小的比较
3.  字符串变数stoi()
4.  数字变字符串to_string()
 */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool comp(char m, char n)
{
    if (m > n)
        return true;
    else
        return false;
}

int main()
{
    string a, b, c;
    cin >> c;
    //为不足4位的数补0
    c.insert(0, 4 - c.length(), '0');

    while (true)
    {
        a = c;
        b = c;
        //逆序排序
        sort(a.begin(), a.end(), comp);
        //顺序排序
        sort(b.begin(), b.end());
        //自动改变其类型
        int x = stoi(a);
        int y = stoi(b);
        int z = x - y;
        //数字变字符串
        c = to_string(z);
        //补0
        c.insert(0, 4 - c.length(), '0');
        cout << a << " - " << b << " = " << c << endl;
        if (z == 0 || z == 6174)
            break;
    }
    system("pause");
    return 0;
}