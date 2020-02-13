#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    char c;
    vector<string> v;
    string str;

    while (cin >> str)
    {
        v.push_back(str);
        if((c = getchar())=='\n')
            break;
    }
    for (int j = v.size()-1; j>=0; j--)
    {
       if(j!=0){
           cout<<v[j]<<" ";
       }else {
           cout<<v[j];
       }
    }
    system("pause");
    return 0;
}