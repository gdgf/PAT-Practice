#include <iostream>
#include <cstdio>
using namespace std;
char ch;
char ans[2000005];
int vis[127],c;

int main() {
    
    while((ch = getchar()) != '\n' || !vis['\n']) {
        if(ch >= 31 && ch <= 126 && !vis[ch]) {
            ans[c++] = ch;
        }
        vis[ch] = 1;
    }
    ans[c] = 0;
    printf("%s",ans);
}