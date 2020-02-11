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

/*
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    char c;
    vector<string> v;
    string str;
    int j ;

    while (cin >> str)
    {
        v.insert(v.begin(),str);

        if((c = getchar())=='\n')
            break;
    }

    vector<string>::iterator i = v.begin(), j = v.end();

    for (j = v.size(); j>0; j--, i++)
    {
        cout << *i;

        if (j != 1)
            cout << " ";
    }

    return 0;
}
 */
/*
//方法三
#include<cstdio>
int main(){
    int num = 0;      //单词的个数
    char ans[80][80];
    while(scanf("%s", ans[num]) != EOF){    //一直输入直到文件末尾
        num++;      //单词的个数加 1 
    }
    for(int i = num - 1; i >= 0; i--){      //倒着输出单词
        printf("%s", ans[i]);
        if(i > 0) printf(" "); 
    }
    return 0;
}
*/