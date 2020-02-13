// 1009_1.cpp : 定义控制台应用程序的入口点。
// 把所有单词入栈，然后出栈

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    char c;
    stack<string> s;
    string str;
    while (cin >> str)
    {
        s.push(str);
        if ((c = getchar()) == '\n')//判断输入是否完毕
            break;
    }
    cout<<s.top();
    s.pop();
    while (!s.empty())
    {
        cout << " " << s.top();
        s.pop();
    }
    return 0;
}