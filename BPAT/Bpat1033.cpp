/*
 *  学习string的一种语法:查看string中是否含有某个字符。
 *        example.find(x)!=string::npos 
 */
#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string bad, should;
  getline(cin, bad);   
  getline(cin, should);

   //toupper()--参数小写变成大写，否则返回该参数
  for (int i = 0, length = should.length(); i < length; i++) {
      //如果should中的字母在bad中存在,肯定不能输出(注意要变为小写)
      if (bad.find(toupper(should[i])) != string::npos)
          continue;   
      //对于要输出的大写字母，如果上档键坏了，那就无法输出。
      if (isupper(should[i]) && bad.find('+') != string::npos) 
          continue;    
      cout << should[i];
  }
  return 0;
}