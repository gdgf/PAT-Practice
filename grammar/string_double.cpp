#include <iostream>
#include <sstream> //使用stringstream需要引入这个头文件
using namespace std;

typedef double Type;

Type stringToNum(const string& str)
{
    istringstream iss(str);
    Type num;
    iss >> num;
    return num;
}

int main()

{
    string sharp_fn_array = "0.35684";
    Type volt_min = stringToNum(sharp_fn_array);
    cout << volt_min << endl;
    system("pause");
    return 0;
}