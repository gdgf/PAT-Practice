/*
 直接抄的
*/

#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string bad, should;
  getline(cin, bad);  //为了防止第一行是空的，不能用cin >> ,用getline(cin, ...)
  getline(cin, should);
  
  for (int i = 0, length = should.length(); i < length; i++) {
    if (bad.find(toupper(should[i])) != string::npos) 
        continue;    //toupper()--参数小写变成大写，否则返回该参数
    if (isupper(should[i]) && bad.find('+') != string::npos) continue;    //判断大写字母能不能输出
    cout << should[i];
  }
  return 0;
}