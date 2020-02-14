/*
 * 这道题还没有搞懂
 * 代码来源:https://blog.csdn.net/tangxinru123/article/details/84975248
 */
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >>s;
    int i = 0;
    while (s[i] != 'E') i++; //找到E的位置

    string t = s.substr(1, i-1);
    int n = stoi(s.substr(i+1));  
    if (s[0] == '-') 
        cout << "-";
    
    //因为原数是科学计数法表示，所以其值必然是x.XXX,所以如果小于0，则必然需要再前面加0,
    if (n < 0) {
        cout << "0.";
        for (int j = 0; j < abs(n) - 1; j++) cout << '0';
        for (int j = 0; j < t.length(); j++)
            if (t[j] != '.') cout << t[j];  //输出除了小数点以外的所有数
    } else {
        cout << t[0]; //
        int cnt, j;
        for (j = 2, cnt = 0; j < t.length() && cnt < n; j++, cnt++) 
            cout << t[j];
       
       //10的位数足以移动到了小数点后面
       //如1.2*10^3，  最后变成1200，只需要手动补充0的个数即可
        if (j == t.length()) {
            for (int k = 0; k < n - cnt; k++) 
                cout << '0';
        } else {  
            //如1.23456*10^2,最后变成123.456，这个时候需要手动补充小数点及后面的数
            cout << '.';
            for (int k = j; k < t.length(); k++) 
                cout << t[k];
        }
    }
    return 0;
}